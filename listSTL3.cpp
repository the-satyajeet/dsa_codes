#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(30);
    ls.emplace_back(40);

    // push element at the front
    ls.push_front(20);
    ls.emplace_front(10);

    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;

    // rest functions are same as vector -> begin, end, rbegin, rend, clear, insert, size, swap, etc.
    return 0;
}
