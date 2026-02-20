// GFG Link - https://www.geeksforgeeks.org/problems/topological-sort/1?utm=codolio


// Solution --->

class Solution {
  public:
  
    void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& st) {
        visited[node] = true;
        
        for(int i = 0; i < adj[node].size(); i++) {
            if(!visited[adj[node][i]]) {
                DFS(adj[node][i], adj, visited, st);
            }
        }
        
        st.push(node);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        
        
        for(int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            
            adj[a].push_back(b);
        }
        
        vector<bool> visited(V, false);
        stack<int> st;
        
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                DFS(i, adj, visited, st);
            }
        }
        
        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};


