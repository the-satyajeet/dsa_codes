#include<iostream>
using namespace std;

int binaryRecursiveSearch(int arr[], int n, int low, int high, int target) {

    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            return binaryRecursiveSearch(arr, n, low, mid - 1, target);
        return binaryRecursiveSearch(arr, n, mid + 1, high, target);
    }
    return -1;
}

int main() {
    int arr[] = {12, 23, 38, 49, 53, 61, 72, 92};
    int target;

    cout<<"Enter number to search in array: ";
    cin>>target;

    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n-1;
    int res = binaryRecursiveSearch(arr, n, low, high, target);
    if(res == -1)
        cout<<"Not found";
    else
        cout<<"Found at "<<res;

    return 0;
}
