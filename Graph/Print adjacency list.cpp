// GFG Link - https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1?utm=codolio


// Solution --->

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>> adj(V);
        
        for(int i=0; i < edges.size(); i++) {
            int a = edges[i].first;
            int b = edges[i].second;
            
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        return adj;
    }
};




// Solution - 2 
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>> adj(V);
        
        int n = edges.size();
        
        for(auto &edge : edges) {
            int a = edge.first;
            int b = edge.second;
            
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        return adj;
    }
};
