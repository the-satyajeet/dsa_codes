#include<bits/stdc++.h>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void printFibonacciRecursive(int n) {
    for (int i = 0; i < n; ++i) {
        cout<<fibonacciRecursive(i)<<" ";
    }
}

int main() {
    int n = 10;
    printFibonacciRecursive(n);
    return 0;
}
