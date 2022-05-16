#include <iostream>

using namespace std;

int main() {
    int sum = 0; int num1 = 0; int num2 = 1;
    while (num2 < 4000000) {
        if (num2 % 2 == 0) {
            sum += num2;
        }
        int temp = num2;
        num2 += num1;
        num1 = temp;
    }
    cout << sum;
    return 0;
}