
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    int og = num;
    int ans = 0;
    while(num > 0) {
        int digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    return ans == og;
}

int main() {

    int n = 121;
    if(isPalindrome(n))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;

}
