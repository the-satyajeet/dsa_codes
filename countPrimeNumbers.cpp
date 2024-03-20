#include<bits/stdc++.h>
using namespace std;
// not fixed
void countPrimeNumbers(int x, int y) {
    int count = 0;
    for(int i = x; i <= y; ++i) {
        for(int j = 1; j <= sqrt(x); ++j) {
            if ( i % j == 0) {
                if(j == i / j)
                    count++;
                else
                    count += 2;
            }

        }
        if(count > 2)
        cout<<i<<" ";

    }
}

int main() {
    int startx = 1;
    int endx = 10;

    countPrimeNumbers(startx, endx);
    return 0;
}

