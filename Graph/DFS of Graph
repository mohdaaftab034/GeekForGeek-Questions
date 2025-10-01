// GFG Link - "https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1"


class Solution {
  public:
  
  
    void dfs(int node, vector<vector<int>>& adj, vector<int>& ans, vector<bool>& visited) {
        
        visited[node] = 1;
        ans.push_back(node);
        
        int n = adj[node].size();
        
        for(int i = 0; i < n; i++) {
            
            if(!visited[adj[node][i]]) {
                
                dfs(adj[node][i], adj, ans, visited);
                
            }
        } 
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        
        int v = adj.size();
        
        vector<bool>visited(v, 0);
        
        vector<int>ans;
        
        dfs(0, adj, ans, visited);
        
        return ans;
    }
};
