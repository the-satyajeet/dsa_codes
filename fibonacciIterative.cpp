#include<bits/stdc++.h>
using namespace std;
void fibonacciIterative(int n) {
    int first = 0, second = 1;
    int next;
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout<<next<<" ";
    }
}

int main() {

    int n = 10;
    fibonacciIterative(n);
    return 0;
}
