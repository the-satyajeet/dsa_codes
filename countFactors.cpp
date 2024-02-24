#include<bits/stdc++.h>
using namespace std;

int countFactors(int num) {
    int count = 0;

    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            // If both 'i' and 'num/i' are the same, count only once
            if (i == (num / i)) {
                count++;
            }
            else { 
                // Otherwise, count both
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int n = 36;
    // int count = 2;

    // for (int i = 2; i < n/2+1; i++) {
    //     if(n % i == 0)
    //         count++;
    // } // not recommended
    // cout<<count;

    cout<<countFactors(n);

    return 0;
}

