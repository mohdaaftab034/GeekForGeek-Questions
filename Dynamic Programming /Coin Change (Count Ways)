// GFG Link - https://www.geeksforgeeks.org/problems/coin-change2448/1?page=1&category=Dynamic%20Programming&sortBy=submissions


// Top-down approach ---> Recursion + Memoization
class Solution {
  public:
  
    int solve(int i, vector<vector<int>>& dp, int sum, vector<int>& coins, int n) {
        // BASE CASE
        if(sum == 0) {
            return 1;
        }
        
        if(i >= n) {
            return 0;
        }
        
        // STEP - 3
        if(dp[i][sum] != -1) {
            return dp[i][sum];
        }
        
        int take = 0;
        int notTake = 0;
        
        // Check the sum greater than or equal to coins[i]
        if(sum >= coins[i]) {
            take = solve(i, dp, sum - coins[i], coins, n);
        }
        
        notTake = solve(i + 1, dp, sum, coins, n);
        
        // STEP - 2
        return dp[i][sum] = (take + notTake);
    }
  
    int count(vector<int>& coins, int sum) {
        int n = coins.size();
        // STEP - 1
        vector<vector<int>> dp(n+1, vector<int>(sum + 1, -1));
        
        return solve(0, dp, sum, coins, n);
    }
};



// Bottom-up Approach ---> Tabulation method
class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        
        // STEP - 1
        vector<int> dp(sum + 1);
        // STEP - 2
        dp[0] = 1;
        
        for(int coin: coins) { // Traverse every coin which present in the coins array
            for(int i = coin; i <= sum; i++) { // Traverse every index of dp array
                dp[i] += dp[i - coin];
            }
        }
        
        return dp[sum];
    }
};



