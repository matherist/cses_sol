#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector< int > a;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
            a.push_back(n);
        } 
        else {
            n = 3 * n + 1;
            a.push_back(n);
        }
    }
    cout << 1;
}
