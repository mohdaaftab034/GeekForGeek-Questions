// GFG Link - https://www.geeksforgeeks.org/problems/rotten-oranges2536/1?utm=codolio


// Solution --->

class Solution {
  public:
    
    typedef pair<int, int> P;
    vector<vector<int>> directions{{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
    int orangesRot(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        queue<P> que; // It will Store coords of the cells
        int freshCount = 0;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 2) {
                    que.push({i, j});
                } else if(mat[i][j] == 1) {
                    freshCount++;
                }
            }
        }
        
        if(freshCount == 0) return 0; // Non of the fresh oranges present in the grid
        
        int minutes = 0;
        
        while(!que.empty()) {
            int N = que.size(); // Calculate size of queue for updating minutes variable
            
            while(N--) {
                P curr = que.front();
                que.pop();
                
                int i = curr.first;
                int j = curr.second;
                
                for(vector<int>& dir : directions) {
                    int new_i = i + dir[0];
                    int new_j = j + dir[1];
                    
                    if(new_i >= 0 && new_i < m && new_j >= 0 && new_j < n && mat[new_i][new_j] == 1) {
                        mat[new_i][new_j] = 2;
                        que.push({new_i, new_j});
                        freshCount--;
                    }
                }
            }
            minutes++;
        }
        
        return freshCount == 0 ? (minutes - 1) : -1;
    }
};
