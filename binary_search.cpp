#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int res = binarySearch(arr, n, target);
    if(res == -1)
        cout<<"Bus No. Not found";
    else
        cout<<"Bus No. Fount at index "<<res;

    return 0;
}
