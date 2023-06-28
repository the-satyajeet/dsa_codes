#include <iostream>
using namespace std;

int main() {
    int i, j;
    // 1st Method to create 2D array - completely stored in stack 
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};

    // 2nd Method to create 2D array - partially stored in stack and heap
    int *B[3];
    B[0] = (int *)malloc(4 * sizeof(int)); // malloc function can be used in C++ also
    B[1] = (int *)malloc(4 * sizeof(int)); 
    B[2] = new int[4];  // C++ uses 'new' keyword to dynamically initialize array rather than using malloc function in C language style
    // inputting any values
    for(i = 0; i < 3; i++)  {
        for(j = 0; j < 4; j++)  {
            B[i][j] = i+j;
        }
    }

    // 3rd Method to create 2D array - completely stored in heap
    int **C;
    C = (int **)malloc(3 * sizeof(int));
    C[0] = new int[4];
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));
    // inputting any values
    for(i = 0; i < 3; i++)  {
        for(j = 0; j < 4; j++)  {
            C[i][j] = i+j*10;
        }
    }

    // printing all the arrays - just change the Array name
    for(i = 0; i < 3; i++)  {
        for(j = 0; j < 4; j++)  {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
