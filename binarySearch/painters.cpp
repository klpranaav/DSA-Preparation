#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int p, int mid){
    int painterCount = 1, time = 0;
    for (int i = 0; i < n; i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > p || arr[i] > mid){
                return false;
            }
            time = arr[i];
        }
    }
    return true;
}

int painters(int arr[], int n, int p){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    int start = 0, end = sum, ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(isPossible(arr, n, p, mid)){
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
    int arr[4] = {10, 20, 30, 40};
    int p;
    cin >> p;

    int res = painters(arr, 4, p);
    cout << res << endl;

    return 0;
}