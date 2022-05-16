// Imports:
// Basic Imports
#include <iostream>
#include <cstring>
#include <assert.h>
#include <limits>

// Data Structures
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <unordered_map>
#include <map>
#include <set>

// Algorithms
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

// Macros:
// Simplify scanning in items
#define SCD(t) scanf("%d",&t)
#define SCDD(t, u) scanf("%d%d", &t, &u);
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)

// Constants
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795


void bruteForce(int maxArr[], int size) {
    int product, maxProduct = numeric_limits<int>::min(), minProduct = numeric_limits<int>::max();
    for (int index1 = 0; index1 < size; index1++) {
        for (int index2 = index1 + 1; index2 < size; index2++) {
            for (int index3 = index2 + 1; index3 < size; index3++) {
                for (int index4 = index3 + 1; index4 < size; index4++) {
                    product = maxArr[index1] * maxArr[index2] * maxArr[index3] * maxArr[index4];
                    if (product > maxProduct) maxProduct = product;
                    if (product < minProduct) minProduct = product;
                }
            }
        }
    }
    printf("%d\n%d", minProduct, maxProduct);
}


void solve() {
    int numOfElements;
    SCD(numOfElements);
    if (numOfElements > 8) {
        int temp;
        int max1 = numeric_limits<int>::min(), max2 = max1, max3 = max2, max4 = max1;
        int min1 = numeric_limits<int>::max(), min2 = min1, min3 = min1, min4 = min1;
        for (int index = 0; index < numOfElements; index++) {
            SCD(temp);
            if (temp > max1) {
                max4 = max3;
                max3 = max2;
                max2 = max1;
                max1 = temp;
            }
            else if (temp > max2) {
                max4 = max3;
                max3 = max2;
                max2 = temp;
            }
            else if (temp > max3) {
                max4 = max3;
                max3 = temp;
            }
            else if (temp > max4) {
                max4 = temp;
            }

            if (temp < min1) {
                min4 = min3;
                min3 = min2;
                min2 = min1;
                min1 = temp;
            }
            else if (temp < min2) {
                min4 = min3;
                min3 = min2;
                min2 = temp;
            }
            else if (temp < min3) {
                min4 = min3;
                min3 = temp;
            }
            else if (temp < min4) {
                min4 = temp;
            }
        }
        int maxArr[8] = {max1, max2, max3, max4, min1, min2, min3, min4};
        bruteForce(maxArr, 8);
    }
    else {
        int arr[numOfElements];
        for (int index = 0; index < numOfElements; index++) 
            SCD(arr[index]);
        bruteForce(arr, numOfElements);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();

    return 0;
}