#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;

    vector<pair<int, int>> v3 = {{1, 2}, {3, 4}, {5, 6}};
    for(auto it = v3.begin(); it != v3.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }    

    vector<pair<int, int>> v4;
    v4.push_back({24, 54});
    v4.emplace_back(45, 65);
    for(auto it : v4) cout<<it.first<<" "<<it.second<<endl;

    vector<int> v1(5, 100);
    // v1.emplace_back(200);
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    vector <int> v2(v1);
    for(auto it: v2) {
        cout<<it<<" ";
    }
    
    return 0;
}