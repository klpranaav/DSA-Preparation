#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1, pageSum = 0;
    for (int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int n, int m){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    int start = 0, end = sum, ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {1,1, 2, 2, 3};
    int m;
    cin >> m;

    int res = bookAllocation(arr, 4, m);
    cout << res << endl;

    return 0;
}