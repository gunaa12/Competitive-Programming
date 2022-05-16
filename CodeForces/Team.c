#include <stdio.h>

int main() {
    int numOfProbs, A, B, C;
    int numOfSols = 0;
    scanf("%d\n", &numOfProbs);
    for (int prob = 0; prob < numOfProbs; prob++) {
        scanf("%d %d %d", &A, &B, &C);
        if (((A + B + C) >= 2)) {
            numOfSols++;
        }
    }
    printf("%d", numOfSols);
    return 0;
}