// Imports:
// Basic Imports
#include <iostream>
#include <cstring>
#include <assert.h>

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


void solve() {
    int numOfInputs, goldenNum, sum, temp, numOfValidSubArrays = 0;
    SCDD(numOfInputs, goldenNum);
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int index = 0; index < numOfInputs; index++) {
        scanf("%d", &temp);
        sum += temp;
        if (mp.find(sum) == mp.end()) {
            mp[sum] = 1;
        }
        else {
            mp[sum] += sum;
        }
        if (mp.find(sum - goldenNum) != mp.end()) numOfValidSubArrays += mp[sum - goldenNum];
    }
    printf("%d", numOfValidSubArrays);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();
    return 0;
}