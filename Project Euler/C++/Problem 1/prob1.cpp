#include <iostream>

using namespace std;

int main() {
    int sum;
    for (int num = 0; num < 1000; num++) {
        if (num % 3 == 0) {
            sum += num;
        }
        else if (num % 5 == 0) {
            sum += num;
        }
    }
    cout << sum;
}