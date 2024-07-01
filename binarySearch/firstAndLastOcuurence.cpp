#include<bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int n, int t){
    int start = 0, end = n - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == t){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > t){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccur(int arr[], int n, int t) {
    int start = 0, end = n - 1, ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == t) {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] > t) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastOccurrence(int arr[], int n, int t) {
    int first = firstOccur(arr, n, t);
    int last = lastOccur(arr, n, t);

    return {first, last};
}

int main() {
    int arr[9] = {1, 2, 2, 2, 3, 4, 5, 5, 5};
    int t;
    cin >> t;

    pair<int, int> ans = firstAndLastOccurrence(arr, 9, t);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}