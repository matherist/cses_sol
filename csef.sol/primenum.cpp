#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    long long n, t;
    cin >> n >> t;
    set<int> s;
    long a[t];
    for(int i =0; i <t; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j =0; j <= t; j++){
            if(i%a[j]== 0){
               s.insert(i);
            }
        }
    }
    cout << s.size() << endl;
}