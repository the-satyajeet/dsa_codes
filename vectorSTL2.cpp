#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<endl;
    cout<<v.at(1)<<endl;

    vector<pair<int, int>> v3 = {{1, 2}, {3, 4}, {5, 6}};
    for(auto it = v3.begin(); it != v3.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }

    vector<pair<int, int>> v4;
    v4.push_back({24, 54});
    v4.emplace_back(66, 76);
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
    cout<<"Satya"<<endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    // delete one element
    // vec.erase(vec.begin()+1);

    // delete elements within range
    vec.erase(vec.begin()+1, vec.begin()+4);

    // insert an element
    vec.insert(vec.begin(), 50);  // {50, 1, 5}

    // insert multiple of same elements
    vec.insert(vec.begin()+2, 3, 69); // {50, 1, 69, 69, 69, 5}

    // copy elements from one vector to another
    vector<int> copy(2, 96);
    vec.insert(vec.begin(), copy.begin()+1, copy.end()); // {96, 50, 1, 69, 69, 69, 5}

    // delete an element from the back
    vec.pop_back();

    for(auto it: vec) {
        cout<<it<<" ";
    }
    // size of the vector
    cout<<endl<<"Size of vec: "<<vec.size()<<endl;

    // swap elements of vectors
    vec.swap(copy);
    for(auto it: copy) {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: vec) {
        cout<<it<<" ";
    }

    // make the vector empty -> {}
    vec.clear();
    // check if the vector is empty or not -> if empty return 1, 0 otherwise
    cout<<endl<<vec.empty()<<endl;

    return 0;
}
