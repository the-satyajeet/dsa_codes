#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    cout<<"i++: ";
    for (int i = 0; i < n; i++) {
        cout<<i<<ends;
    }

    cout<<endl<<"++i: ";
    for (int i = 0; i < n; ++i) {
        cout<<i<<ends;
    }
    int p = 0, q = 0;
    cout<<endl<<"p++: "<<p++<<endl;
    cout<<"++q: "<<++q<<endl;
    return 0;
}

