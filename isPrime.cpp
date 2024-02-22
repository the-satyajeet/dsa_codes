#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
        else
            continue;
    }
    return true;
}

int main() {
    int n = 1000;
    for(int i = 0; i < 5; ++i) {
        int j = rand()%n;
        cout<<j<<" is prime number: "<<isPrime(j)<<endl;
    }
    return 0;
}
