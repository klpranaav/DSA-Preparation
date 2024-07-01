#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int c, int mid){
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == c){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int n, int c){
    int maxi = *max_element(arr, arr + n);
    int start = 0, end = maxi, ans = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(arr, n, c, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {4, 2, 1, 3, 6};
    int c;
    cin >> c;

    int res = aggressiveCows(arr, 5, c);
    cout << res << endl;

    return 0;
}