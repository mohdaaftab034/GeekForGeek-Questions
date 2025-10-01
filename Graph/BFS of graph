// GFG Link - "https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1"


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        
        int v = adj.size();
        queue<int> que;
        que.push(0);
        
        vector<bool> visited(v, 0);
        visited[0] = 1;
        
        vector<int>ans;
        int node;
        
        while(!que.empty()) {
            
            node = que.front();
            que.pop();
            ans.push_back(node);
            
            for(int i = 0; i < adj[node].size(); i++) {
                
                if(!visited[adj[node][i]]) {
                    
                    visited[adj[node][i]] = 1;
                    que.push(adj[node][i]);
                }
            }
        }
        
        return ans;
        
    }
};
