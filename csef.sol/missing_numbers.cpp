// #include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, sums = 0, sumf = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n-1; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; ++i){
        sums = sums + a[i];
    }
    sumf = n*(n+1)/2;
    cout << sumf - sums;
}
