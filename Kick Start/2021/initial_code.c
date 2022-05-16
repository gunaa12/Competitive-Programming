#include <stdio.h>

#define TRUE (1)
#define FALSE (0)

int allEven(int num) {
    while (num != 0) {
        if ((num % 2) != 0) return FALSE;
        num /= 10;
    }
    return TRUE;
}

int main() {
    int numOfInputs, num;
    scanf("%d", &numOfInputs);
    for (int input = 1; input <= numOfInputs; input++) {
        scanf("%d", &num);

        // way #1, but not very efficient
        // if (allEven(3num))
        //     printf("Case #%d: 0\n", input);
        // else {
        //     int minAns = 1;
        //     while (!allEven(num + minAns) && !allEven(num - minAns)) minAns++;
        //     printf("Case #%d: %d\n", input, minAns);
        // }

        //way #2
        char str[64];
        sprintf(str, "%d", num);
        int startInd = 0;
        for (int index = 63; index >= 0; index--) {
            if (str[index] % 2 == 1) startInd = index;
        }
        int mult = 64 - startInd;
    }
    return 0;
}