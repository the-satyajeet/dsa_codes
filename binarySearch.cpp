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
    int arr[] = {12, 23, 38, 49, 53, 61, 72, 92};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout<<"Enter number to search in array: ";
    cin>>target;

    int res = binarySearch(arr, n, target);
    if(res == -1)
        cout<<"Not found";
    else
        cout<<"Found at "<<res;

    return 0;
}
