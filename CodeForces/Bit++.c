#include <stdio.h>
#include <string.h>

int main() {
    int numOfOps;
    scanf("%d", &numOfOps);
    char str[4];
    int X = 0;
    for (int op = 0; op < numOfOps; op++) {
        scanf("%s", str);
        if ((str[0] == '+') || (str[1] == '+')) X++;
        else X--;
    }
    printf("%d", X);
    return 0;
}