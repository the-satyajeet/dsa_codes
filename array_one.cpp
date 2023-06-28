#include <iostream>
using namespace std;

int main() {
    int *p, *q;
    int i;
    
    p = (int *)malloc(5 * sizeof(int));
    q = (int *)malloc(10 * sizeof(int));

    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

    for (i = 0; i < 5; i++)
        q[i] = p[i];

    delete []p;
    p = q;
    q = NULL;

    p[5] = 23;
    p[6] = 23;
    p[7] = 23;

    for(i = 0; i < 10; i++)
        cout<<p[i]<<" ";

    return 0;
}
