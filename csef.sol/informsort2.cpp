#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n] = {0};
    int b[k] = {0};
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    for (int j=0; j < k; j++){
        cin >> b[j];
    }
    for(int i=0; i< n; i++){
        int left = 0, right = k-1;
        while (left <= right){
            int pivot = left + (right - left);
            if (a[i] == b[pivot] || a[i] + 1 == b[pivot]){
                cout << a[i] << "\n";
            }
            
            else if(a[i] < b[pivot]){
                right = pivot - 1;
            }
            else{
                left = pivot + 1;
            }
        return -1;
        }
    }
    
}