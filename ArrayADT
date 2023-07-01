#include<iostream>
using namespace std;

struct Array    {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)  {
    for(int i = 0; i < arr.length; i++)   {
        cout<<arr.A[i]<<" ";
    }
}

int main()  {
    struct Array arr;
    int i;
    cout<<"Enter number of Numbers: ";
    cin>>arr.size;
    arr.A = new int[arr.size];

    cout<<"How many elements needs to be stored: ";
    cin>>arr.length;

    cout<<"Enter elements: ";
    for(i = 0; i < arr.length; i++)   {
        cin>>arr.A[i];
    }

    Display(arr);

    return 0;
}
