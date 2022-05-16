#include <iostream>

using namespace std;

bool divisible(int testNum) {
    for (int num = 2; num <= 20; num++) {
        if (testNum % num != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int testNum = 20;
    while (true) {
        if (divisible(testNum)) {
            break;
        }
        cout << testNum << endl;
        testNum++;
    }
    cout << testNum;
    return 0;
}