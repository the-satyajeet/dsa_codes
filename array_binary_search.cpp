#include<iostream>
using namespace std;

int BinarySearch(int arr[], int key)  {
    int l = 0, h = 14, mid, i;
    while( l <= h) {
        mid = (l + h) / 2;
        if (arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            h = mid - 1;
        else
             l = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[15] = {4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43};

    cout<<BinarySearch(arr, 8);


    return 0;
}
