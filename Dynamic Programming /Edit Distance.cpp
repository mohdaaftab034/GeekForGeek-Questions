// Problem - https://www.geeksforgeeks.org/problems/edit-distance3702/1?utm=codolio





// -------------------Solution - 1----------------------
class Solution {
  public:
    int n, m;
    
    int solve(string& s1, string& s2, int i, int j, vector<vector<int>> & dp) {
        
        if (i == n) {
            return m - j;
        }
        
        if(j == m) {
            return n - i;
        }
        
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        if (s1[i] == s2[j]) {
            return dp[i][j] = solve(s1, s2, i + 1, j + 1, dp);
        }
        
        int insert = 1 + solve(s1, s2, i, j + 1, dp);
        
        int delet = 1 + solve(s1, s2, i + 1, j, dp);
        
        int replace = 1 + solve(s1, s2, i + 1, j + 1, dp);
        
        
        return dp[i][j] = min({insert, delet, replace});
    }
    
    int editDistance(string& s1, string& s2) {
        n = s1.size();
        m = s2.size();
        
        vector<vector<int>> dp(n, vector<int> (m , -1));
        
        
        
        return solve(s1, s2, 0, 0, dp);
    }
};
