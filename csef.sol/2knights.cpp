// Time limit: 1.00 s Memory limit: 512 MB
// Your task is to count for k=1,2,…,n
//  the number of ways two knights can be placed on a k×k
//  chessboard so that they do not attack each other.

// Input

// The only input line contains an integer n
// .

// Output

// Print n
//  integers: the results.

// Constraints
// 1≤n≤10000

// Example

// Input:
// 8

// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848
#include <iostream>
using namespace std;

// Function to count the number of ways two knights can be placed on a k x k chessboard
// without attacking each other
void countWaysToPlaceKnights(int n) {
    for (int k = 1; k <= n; k++) {
        // Calculate the total number of ways without attacking each other
        long long ways = (long long)(k * k) * (k * k - 1) / 2 - 4*(k-2)*(k-1);
        cout << ways << endl;
    }
}

int main() {
    int n;
    cin >> n;
    countWaysToPlaceKnights(n);
    return 0;
}
