// GFG Link - https://www.geeksforgeeks.org/problems/replace-os-with-xs0052/1


// Solution ---> DFS

class Solution {
  public:
  
    int m, n;
    vector<vector<int>> directions{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    void DFS(int i, int j, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        vis[i][j] = 1; // Mark all the traverse as Zero
        
        for(auto &dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            
            if(new_i >= 0 && new_i < m && new_j >= 0 && new_j < n && grid[new_i][new_j] == 'O' && !vis[new_i][new_j]) {
                DFS(new_i, new_j, vis, grid);
            }
        }
    }
    void fill(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        vector<vector<int>> vis(m, vector<int> (n, 0));
        
        // Check first row and last row to mark them
        for(int j = 0; j < n; j++) {
            // First row
            if(!vis[0][j] && grid[0][j] == 'O') {
                DFS(0, j, vis, grid);
            }
            
            // Last row
            if(!vis[m-1][j] && grid[m-1][j] == 'O') {
                DFS(m-1, j, vis, grid);
            }
        }
        
        // Check first and last column to mark them
        for(int i = 0; i < m; i++) {
            
            // First column
            if(!vis[i][0] && grid[i][0] == 'O') {
                DFS(i, 0, vis, grid);
            }
            
            // Last Column
            if(!vis[i][n-1] && grid[i][n-1] == 'O'){
                DFS(i, n-1, vis, grid);
            }
        }
        
        // Mark All the row's and col's except first row, first column, last row, and last column
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!vis[i][j] && grid[i][j] == 'O') {
                    grid[i][j] = 'X';
                }
            }
        }
        
    }
};



