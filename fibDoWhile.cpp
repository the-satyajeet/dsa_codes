#include<bits/stdc++.h>
using namespace std;

void fibDoWhile(int n) {
    int i = 0;
    int first = 0, second = 1;
    int next;
    cout<<first<<" "<<second<<" ";
    do{
        // cout<<" "<<first<<" "<<second<< " ";
        next = first + second;
        first = second;
        second = next;
        cout<<next<<" ";
        i++;
    }while(i < n - 2);
}

int main() {
    int n = 10;
    fibDoWhile(n);
    return 0;
}
