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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int num1, num2;
    char ch;
    scanf("%d %d\n%c", &num1, &num2, &ch);
    int result = num1 + num2;
    if (ch == 'M') result = num1 * num2; 
    printf("%d", result);

    return 0;
}