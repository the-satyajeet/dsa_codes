#include<bits/stdc++.h>
using namespace std;

int main() {

    pair<int, int> p = {1, 3};
    cout<<"p.first: "<<p.first<<" | p.second: "<<p.second<<endl;

    pair<int, pair<int, int>> p1 = {24, {45, 62}};
    cout<<"p1.first: "<<p1.first<<" | p1.second.first: "<<p1.second.first<<" | p1.second.second: "<<p1.second.second<<endl;

    pair<int, int> arr[] = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};
    cout<<"arr[2].second: "<<arr[2].second<<endl; // Thala7

    return 0;
}
