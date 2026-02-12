// GFG link - https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm=codolio


// Solution ---> 

class Solution {
public:
    bool DFS(int node, int parent,
             unordered_map<int, vector<int>>& adj,
             vector<bool>& visited) {
        
        visited[node] = true;

        for (int ngbr : adj[node]) {
            if (!visited[ngbr]) {
                if (DFS(ngbr, node, adj, visited))
                    return true;
            }
            else if (ngbr != parent) {
                // visited and not parent → cycle
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;

        // build graph
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(V, false);

        // handle multiple components
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (DFS(i, -1, adj, visited))
                    return true;
            }
        }
        return false;
    }
};
