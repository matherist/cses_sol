#include <iostream>

using namespace std;

int main()
{
    int t, n, count = 0;
    cin >> t;
    int a[t] = {0};
    for(int i=0; i < t; i++){
        cin >> a[i];
    }
    cin >> n;
    for (int i=0; i < t; i++){
        if (a[i] == n){
            count +=1;
        }
    }
    cout << count;
}