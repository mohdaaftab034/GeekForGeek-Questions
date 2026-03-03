// GFG Link - https://www.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1


// ------------Top-down Approach ---> Recursion + Memoization---------------
class Solution {
  public:
  
    int solve(vector<int>& arr, int i, int prev, int n, vector<vector<int>>& dp) {
        if(i >= n) return 0;
        
        // STEP - 3
        if(dp[i][prev+1] != -1) {
            return dp[i][prev+1];
        }
        
        // there are two condition in this case
        // first -> take
        int take = 0;
        if(prev == -1 || arr[prev] < arr[i]) {
            take = 1 + solve(arr, i+1, i, n, dp);
        }
        
        // second -> not take
        int not_take = solve(arr, i+1, prev, n, dp);
        
        // STEP - 2
        return dp[i][prev+1] = max(take, not_take);
    }
  
    int lis(vector<int>& arr) {
        int n = arr.size();
        
        // Recursion + Memoization
        // STEP - 1
        vector<vector<int>> dp(n, vector<int> (n+1, -1));
        
        return solve(arr, 0, -1, n, dp);
    }
};
