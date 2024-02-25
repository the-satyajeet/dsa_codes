#include<bits/stdc++.h>
using namespace std;

void reverse_int(int num) {
    int og = num;
    int ans = 0;
    while(num > 0) {
        int digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    cout<<ans;
}

int main() {

    int n = 12345;
    reverse_int(n);

    return 0;


}
