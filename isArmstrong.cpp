
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int og = n;
    int cnt = 0;
    int sum = 0;
    while(og > 0) {
        og = og / 10;
        cnt++;
    }
    og = n;

    while (og != 0) {
        int digit = og % 10;
        sum += pow(digit, cnt);
        og /= 10;
    }
    return sum == n;
}

int main() {

    int n = 153;
    if(isArmstrong(n))
        cout<<"Armstrong";
    else
        cout<<"Not armstrong";

}
