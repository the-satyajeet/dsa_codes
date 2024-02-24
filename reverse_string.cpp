#include<bits/stdc++.h>
using namespace std;

void reverseString(string s) {
    int n = s.size();
    for(int i = n-1; i >= 0; i--) {
        cout<<s[i];
    }
}

int main() {
    string inp = "The dog is honest";

    reverseString(inp);
}

