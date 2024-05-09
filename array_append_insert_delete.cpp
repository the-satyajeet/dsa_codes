#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

// insert
void Insert(struct Array *arr, int val, int index)  {
    if(index < arr-> length && index >= 0)
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = val;
        arr->length++;
}

// delete
int Delete(struct Array *arr, int index)   {
    int x = arr->A[index];

    if (index >= 0 && index < arr->length)   {
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }

    return 0;
}

// display
void Display(struct Array arr)  {
    for (int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<" ";

    cout<<endl;
}

int main()
{
    struct Array arr = {{0, 2, 4, 6, 8}, 10, 5};

    // Append(&arr, 10);
    // Insert(&arr, 20, 2);

    Display(arr);

    cout<<Delete(&arr, 3)<<endl;
    Display(arr);

    return 0;
}
