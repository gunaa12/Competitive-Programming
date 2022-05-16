#include <iostream>

using namespace std;

int main() {
    int numOfInputs;
    cin >> numOfInputs;
    for (int input = 1; input <= numOfInputs; input++) {
        int extraLetters = 0;
        string I; string P;
        cin >> I >> P;
        int ILen = (int) I.size();
        int PLen = (int) P.size();
        int IPointer = 0, PPointer = 0;
        while ((IPointer < ILen) && (PPointer < PLen)) {
            if (I[IPointer] == P[PPointer]) {
                IPointer++; PPointer++;
            }
            else {
                PPointer++;
                extraLetters++;
            }
        }
        if (IPointer != ILen) {
            cout << "Case #" << input << ": IMPOSSIBLE";
        }
        else {
            cout << "Case #" << input << ": " << (extraLetters + (PLen - PPointer));
        }
    }
    return 0;
}