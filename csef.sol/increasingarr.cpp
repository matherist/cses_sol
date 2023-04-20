#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    long long t, c = 0, count = 0;
    cin >> t;
    int a[t] = {0};
    for(int i=0;i<t;i++){
        cin >> a[i];
    }
    int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            count += 1;
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
    }
  
    void quickSort(int arr[], int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
    }
}
    // random_shuffle(&a[0], &a[t]);
    // for(int i=0; i < t; i++){
    //     for(int j= i + 1; j < t; j++){
    //         if(a[i] < a[j]){
    //             swap(a[i], a[j]);
    //             c = c + 1;
    //         }
    //     }
    // }
    // cout << c;
}

  
