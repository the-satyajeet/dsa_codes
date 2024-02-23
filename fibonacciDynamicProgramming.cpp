#include <iostream>
using namespace std;

void fibonacciDynamicProgramming(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    cout << "Fibonacci Series: " << fib[0] << " " << fib[1] << " ";
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacciDynamicProgramming(n);
    return 0;
}
