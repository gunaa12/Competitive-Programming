#include <iostream>

using namespace std;

int main() {
    int rows, cols = 0;
    cout << "Rows: ";
    cin >> rows;
    cout << "Cols: "; 
    cin >> cols;
    int nums[rows][cols];
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 20; col++) {
            cin >> nums[row][col];
        }
    }
    int maxProduct = 0;
    int maxHorN = maxHor(nums);
    int maxVerN = maxVer(nums);
    int maxDiagN = maxDiag(nums);
    if (maxHorN > maxProduct) {
        maxProduct = maxHorN;
    }
    if (maxVerN > maxProduct) {
        maxProduct = maxVerN;
    }
    if (maxDiagN > maxProduct) {
        maxProduct = maxDiagN;
    }
    cout << "Max Product: " + maxProduct;
    return 0;
}

int maxHor(int arr[][]) {
    
}

int maxVer(int arr[][]) {

}

int maxDiag(int arr[][]) {

}