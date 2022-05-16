// Imports:
// Basic Imports
#include <iostream>
#include <cstring>
#include <assert.h>
#include <limits>

// Data Structures

/*
    Vector is a dynamic array that is resized when modified (contigous memory).
    Due to this, the access time is O(1). Also insertion or deletion at end is O(1)
    while insertion or deletion elsewhere is O(n) as all elements have to be moved.
 */
#include <vector>

/*
    Non contigous memory where each element also holds a forward and backward
    pointer (doubly linked list). Due to this, insertion and deletion are cheap
    regardless of location. However, random access is O(n) as pointer traversal
    is required to get to correct node. 
 */
#include <list>

/*
    This is essentially a vector of pointers where each pointer points to the
    actual element. Due to this, random access and element insertion or
    deletion at either ends is O(1) while element insertion or deletion
    in middle is O(n) as all pointers have to be moved.
 */
#include <deque>

/*
    Wrapper class to deque as it allows the following methods: back(), front(),
    push_back(), and pop_front(). As dealing with only ends of list, O(1) runtime.
 */
#include <queue>

/*
    Wrapper class to deque as it allows the following methods: back(), push_back(),
    and pop_back(). As dealing with ends of list, O(1) runtime.
 */
#include <stack>

/*
    This is essentially a hash map that provides O(1) runtime.
 */
#include <unordered_map>

/*
    This is also a key value pair that is stored in the form of a self balancing tree
    (red-black tree) leading to search, insert, and delete all being O(log(n)). This
    binary search tree sorts based on the key.
 */
#include <map>

/*
    Similar to a map, this only contains the value rather than the key value pair. This
    binary search tree sorts based on the value.
 */
#include <set>

// Algorithms

/*
    Primarily just for math functions.
 */
#include <math.h>
#include <algorithm>

/*
    Provides make_heap() which turns a vector into a maxheap.
 */
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


void solve() {

}

int main() {
    /*
        Turning of sync with stdio (the C io library, so scanf and printf) to improve performance.
        Also use stdio instead of cin and cout as giving io format improves speed by up to 5 times.
        Finally, untieing input and output streams as we are not making interactive applications.
        We are not buffering here because io can be of different types requiring us to dynamically
        match types, which slows down io. So, not worth the effort. IOStream already optimizes for
        this. If using cin and cout, use '\n' instead of endl as endl forces buffer flush.
     */
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int numOfInputs;
    SCD(numOfInputs);
    for (int input = 1; input <= numOfInputs; input++) {
        printf("Case #%d: ", input);
        solve();
    }

    return 0;
}