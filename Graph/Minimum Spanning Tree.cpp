// Problem - https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1



// ------------------Solution---------------------
class Solution {
public:

    typedef pair<int,int> P;

    int spanningTree(int V, vector<vector<int>>& edges) {

        vector<vector<P>> adj(V);

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int wt = e[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        priority_queue<P, vector<P>, greater<P>> pq;

        vector<bool> inMST(V, false);

        pq.push({0, 0});

        int sum = 0;

        while(!pq.empty()) {

            auto [wt, node] = pq.top();
            pq.pop();

            if(inMST[node])
                continue;

            inMST[node] = true;
            sum += wt;

            for(auto &temp : adj[node]) {

                int neigh = temp.first;
                int neigh_wt = temp.second;

                if(!inMST[neigh]) {
                    pq.push({neigh_wt, neigh});
                }
            }
        }

        return sum;
    }
};
