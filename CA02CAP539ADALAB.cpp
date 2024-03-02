#include<bits/stdc++.h>
using namespace std;

// sum of weights of edges of mst

class mstPrims {
public:
        int spanningTree(int V, vector<vector<int>> adj[]) {
        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>>> pq;
        vector<int> vis(V, 0);

        // wt, node
        pq.push({0, 0});
        int sum = 0;
        while(!pq.empty()) {
            auto itr = pq.top();
            pq.pop();
            int node = itr.second;
            int wt = itr.first;

            // if it is already visited
            if (vis[node] == 1) continue;
            // add it to the mst and marked it as visited
            vis[node] = 1;
            sum += wt;
            for (auto itr : adj[node]) {
                int adjNode = itr[0];
                int edW = itr[1];
                if(!vis[adjNode]) {
                    pq.push({edW, adjNode});
                }
            }
        }
        return sum;
    }
};


// driver code
int main() {
    int V = 5;
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<vector<int>> adj[V];

    for(auto itr: edges) {
        vector <int> tmp(2);
        tmp[0] = itr[1];
        tmp[1] = itr[2];
        adj[itr[0]].push_back(tmp);

        tmp[0] = itr[0];
        tmp[1] = itr[2];
        adj[itr[1]].push_back(tmp);
    }
    mstPrims obj;
    int sum = obj.spanningTree(V, adj);
    cout<<"The MST : "<<sum<<endl;

    return 0;
}
