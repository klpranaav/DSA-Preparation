#include<bits/stdc++.h>
using namespace std;

// int peakIndex(int arr[], int n){
//     int start = 0, end = n - 1;
//     while(start <= end){
//         int mid = start + (end - start) / 2;
//         if(arr[mid] < arr[mid+1]){
//             start = mid + 1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     return start;
// }

int pivot(int arr[], int n){
    int start = 0, end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
}

int main(){
    int arr[5] = {3, 8, 10, 17, 1};

    // int ans = peakIndex(arr, 5);

    int ans = pivot(arr, 5);

    cout << ans << endl;
    return 0;
}