#include <iostream>

using namespace std;

bool isPrime(int x) {
    bool isPrime = true;
    for (int num = 2; num < x; x++) {
        if (x % num == 0) {
            isPrime = false;
        }
    }
    return isPrime;
}

int main() {
    long long num = 600851475143;
    int maxPrime = 1;
    for (long x = 1; x <= num/2; x++) {
        if (isPrime(x)) {
            maxPrime = x;
        }
    }
    return 0;
}