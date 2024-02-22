#include<bits/stdc++.h>
using namespace std;

int partition(int A[], int l, int h) {
    int i = l, j = h;
    int pivot = A[l];
    do {
        do {i++;}while(A[i] <= pivot);
        do {j--;} while(A[j] > pivot);

        if (i < j) swap(A[i], A[j]);
    }while(i < j);
    swap(A[l], A[j]);
    return j;
}

void quickSort(int A[], int l, int h) {
    int j;
    if (l < h) {
        j = partition(A, l, h);
        quickSort(A, l, j);
        quickSort(A, j+1, h);
    }

}

int main() {
    int A[] = { 11, 13, 7, 12, 16, 9, 24, 5, 10, 3, INT32_MAX }, n = 11, i;

    quickSort(A, 0, n-1);
    for (i = 0; i < n-1; i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}
