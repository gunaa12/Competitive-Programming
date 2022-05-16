#include <iostream>
#include <cstring>

using namespace std;

int converter(char c) {
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else return 1000;
}

int romanToInt(string s) {
    int prevVal = 0, total = 0;
    for (int index = s.length() - 1; index >= 0; index--) {
        int curVal = converter(s[index]);
        // printf("Val: %c, %d, ", s[index], curVal);
        if (curVal >= prevVal) {
            prevVal = curVal;
            total += curVal;
        }
        else {
            total -= curVal;
        }
        // printf("%d\n", total);
    }
    return total;
}

int main() {
    string test = "MCMXCIV";
    printf("Final: %d\n", romanToInt(test)); 
    return 0;
}