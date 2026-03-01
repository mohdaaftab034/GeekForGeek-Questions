// GFG Link - https://www.geeksforgeeks.org/problems/number-of-provinces/1?utm=codolio




// User function Template for C++

class Solution {
  public:
  
    void DFS(vector<vector<int>>& adj_1, vector<int>& visited, int node) {
        visited[node] = 1;  // Visit the first node of the graph
        
        // Solve the DFS function of every list of the adjacency list
        for(int &v : adj_1[node]) {
            if(!visited[v]) {
                DFS(adj_1, visited, v);
            }
        }
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        int n = adj.size();
        vector<vector<int>> adj_1(V);
        vector<int> visited(V, 0);
        int count = 0;
        
        // Make Adjacency list
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(adj[i][j] == 1) {
                    adj_1[i].push_back(j);
                    adj_1[j].push_back(i);
                }
            }
        }
        
        // Call The DFS for every part of the Graph
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                DFS(adj_1, visited, i);
                count++;
            }
        }
        
        return count;
    }
};
