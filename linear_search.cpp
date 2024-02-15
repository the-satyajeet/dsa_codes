#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if(arr[i] ==  target)
            return i;
    }
    return - 1;
}

int main() {
    int arr[] = {12, 24, 13, 23, 57, 26};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = linearSearch(arr, n, 23);
    int target;
    cout<<"Enter number to search in array: ";
    cin>>target;
    if (res == -1)
        cout<<"Not found";
    else
        cout<<"Fount at "<<res;

    return 0;
}
