#include <stdio.h>
#include <string.h>

int main() {
    int numOfInputs, len;
    scanf("%d", &numOfInputs);
    char str[numOfInputs][101];
    for (int wordNum = 0; wordNum < numOfInputs; wordNum++) {
        scanf("%s", str[wordNum]);
    }

    for (int wordNum = 0; wordNum < numOfInputs; wordNum++) {
        len = strlen(str[wordNum]);
        if (len > 10) {
            printf("%c%d%c\n", str[wordNum][0], len - 2, str[wordNum][len - 1]);
        }
        else {
            printf("%s\n", str[wordNum]);
        }   
    }
    return 0;
}   