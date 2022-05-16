#include <iostream>
#include <cstring>

using namespace std;


void solve() {
    int numOfInputs = 0, score[2], currentServer = 0;
    score[0] = 0; score[1] = 0;
    scanf("%d", &numOfInputs);
    for (int input = 0; input < numOfInputs; input++) {
        char inputChar;
        scanf(" %c", &inputChar);
        if (inputChar == 'A') {
            if (currentServer == 0) score[0]++;
            else currentServer = 0;
        }
        else {
            if (currentServer == 1) score[1]++;
            else currentServer = 1;
        }
        if ((score[0] >= 15) || (score[1] >= 15)) {
            if ((score[0] - score[1] >= 2) || ((score[1] - score[0] >= 2))) {
                char invalid[numOfInputs];
                scanf("%[^\n]", invalid);
                break;
            }
        }
    }
    if ((score[0] >= 15) && (score[0] - score[1] >= 2)) {
        printf("Team A has won the match with a score of %d-%d.\n", score[0], score[1]);
    }
    else if ((score[1] >= 15) && (score[1] - score[0] >= 2)) {
        printf("Team B has won the match with a score of %d-%d.\n", score[0], score[1]);
    }
    else {
        printf("The score is %d-%d.\n", score[0], score[1]);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int numOfInputs;
    scanf("%d", &numOfInputs);
    for (int input = 1; input <= numOfInputs; input++) {
        printf("Match %d: ", input);
        solve();
    }
    return 0;
}

// use stdio bc without having to figure out template, it is X5 quicker.