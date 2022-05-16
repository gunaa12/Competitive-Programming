#include <iostream>
#include <cstring>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // getting metadata
    int numOfElements, numOfQueries, temp;
    scanf("%d %d", &numOfElements, &numOfQueries);

    // getting elements and building prefix sum arr
    int arr[numOfElements];
    int prefixSum[10][numOfElements] = {0};

    printf("Prefix Sum: ");
    for (int c = 0; c < 10; c++) {
        printf("c = %d: ", c + 1);
        for (int b: prefixSum[c]) {
            printf("%d ", b);
        }
        printf("\n");
    }
    scanf("%d", &arr[0]);
    prefixSum[arr[0] - 1][0] = 1;
    for (int index = 1; index < numOfElements; index++) {
        scanf("%d", &temp);
        arr[index] = temp;
        for (int c = 1; c <= 10; c++) {
            prefixSum[c - 1][index] = prefixSum[c - 1][index - 1]; 
        }
        prefixSum[temp - 1][index] += 1;
    }


    printf("Elements: ");
    for (int el: arr) {
        printf("%d ", el);
    }
    printf("\n");

    printf("Prefix Sum: ");
    for (int c = 0; c < 10; c++) {
        printf("c = %d: ", c + 1);
        for (int b: prefixSum[c]) {
            printf("%d ", b);
        }
        printf("\n");
    }

    // answering queries
    int a, b, c;
    for (int query = numOfQueries - 1; query >= 0; query--) {
        scanf("%d %d %d", &a, &b, &c);
        int occurrences = prefixSum[c - 1][b] - prefixSum[c - 1][a] + (prefixSum[c - 1][a] - prefixSum[c - 1][a - 1]);
        printf("Occurences: %d\n", occurrences);
    }

    return 0;
}