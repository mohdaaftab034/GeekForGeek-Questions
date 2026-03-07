// GFG Link - https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1?utm=codolio


// ---------------Solution-------------------
class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        int start = 0;
        int end = n*m - 1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            int row = mid / m;
            int col = mid % m;
            
            if(mat[row][col] == x) {
                return true;
            } else if(mat[row][col] < x) {
                start = mid + 1;
            } else 
                end = mid - 1;
        }
        
        return false;
    }
};
