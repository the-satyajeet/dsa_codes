#include<bits/stdc++.h>
using namespace std;
/* INPUT
5
1 3 2 1 3
5
1
4
2
3
12
 */
int main() {
    int n = 5;
    int arr[n] = {1, 3, 2, 1, 3};
    //precompute
    int hashh[13] = {0};
    for(int i = 0; i < n; ++i) {
        hashh[arr[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        cout<<hashh[number]<<" ";
    }
}
