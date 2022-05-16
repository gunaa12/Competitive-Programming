#include <stdio.h>
#include <math.h>

int main() {
    int readNum;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            scanf("%d", &readNum);
            if (readNum) {
                printf("%d", (abs(2 - row) + abs(2 - col)));
                return 0;
            }
        }
    }
    return 0;
}