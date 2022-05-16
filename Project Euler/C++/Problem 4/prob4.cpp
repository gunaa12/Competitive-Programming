#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string num) {
    if (num.length() <= 1) {
        return true;
    }
    else if (num[0] == num[num.length() - 1]) {
        return (isPalindrome(num.substr(1, num.length() - 2)));
    }
    return false;
}

int main() {
    int largestPalindrome;
    for (int num1 = 100; num1 < 1000; num1++) {
        for (int num2 = 100; num2 < 1000; num2++) {
            int prod = num1*num2;
            string snum = to_string(prod);
            if (isPalindrome(snum)) {
                if (prod > largestPalindrome) {
                    largestPalindrome = (prod);
                }
            }
        }
    }
    cout << largestPalindrome;
    return 0;
}