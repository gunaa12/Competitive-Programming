#include <stdio.h>
#include <string.h>

int main() {
    int numOfInputs = 0;
    scanf("%d", &numOfInputs);
    char I[100001];
    char P[100001];
    for (int input = 1; input <= numOfInputs; input++) {
        scanf("%s\n%s", I, P);
        int ILen = strlen(I), PLen = strlen(P);
        printf("P Len: %d", PLen);
        int extraChars = 0, IIndex = 0, PIndex = 0;
        while ((IIndex < ILen) && (PIndex < PLen)) {
            if (I[IIndex] == P[PIndex]) {
                IIndex++; PIndex++;
            }
            else {
                extraChars++; PIndex++;
            }
        }
        if (IIndex != ILen) {
            printf("Case #%d: IMPOSSIBLE\n", input);
        }
        else {
            printf("Case #%d: %d\n", input, (extraChars + (PLen - PIndex)));
        }
    }
    return 0;
}