#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int LinearSearch(struct Array arr, int target)  {
    for(int i = 0; i < arr.length; i++)
        if(arr.A[i] == target)
            return i;

    return -1;
}

int main()
{
    struct Array arr = {{2, 4, 6, 8, 10}, 10, 5};

    cout<<LinearSearch(arr, 8);

    return 0;
}
