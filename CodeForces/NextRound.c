#include <stdio.h>

int main() {
    int n, k, score, i;
    scanf("%d %d\n", &n, &k);
    int numOfPlayersToNextRound = 0;
    for (i = 0; i < k; i++) {
        scanf("%d ", &score);
        if (score > 0) {
            numOfPlayersToNextRound++;
        }
        else {
            break;
        }
    }
    if (i >= k) {
        int tempScore;
        for (; i < n; i++) {
            scanf("%d ", &tempScore);
            if (score == tempScore) {
                numOfPlayersToNextRound++;
            }
            else {
                break;
            }
        }
    }
    printf("%d", numOfPlayersToNextRound);
    return 0;
}