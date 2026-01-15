// GFG Link - https://www.geeksforgeeks.org/problems/number-of-coins1824/1?page=1&category=Dynamic%20Programming&sortBy=submissions


// Bottom-up Approach ---> Recursion + Memoization
class Solution {
  public:
  
    int solve(vector<int>& coins, int sum, vector<int>& dp) {
        // BASE CASE
        if(sum == 0) {
            return 0;
        }
        
        if(sum < 0) {
            return INT_MAX;
        }
        
        // STEP - 3
        if(dp[sum] != -1) {
            return dp[sum];
        }
        
        int mini = INT_MAX;
        for(int i = 0; i < coins.size(); i++) {
            int ans = solve(coins, sum - coins[i], dp);
            if(ans != INT_MAX) {
                mini = min(mini, ans + 1);
            }
        }
        // STEP - 2
        dp[sum] = mini;
        
        return mini;
    }
  
    int minCoins(vector<int> &coins, int sum) {
        // STEP - 1 for dp
        vector<int>dp(sum + 1, -1);
        int ans = solve(coins, sum, dp);
        
        if(ans == INT_MAX) {
            return -1;
        }
        
        return ans;
    }
};


// Bottom-up Approach ---> Tabulation Method
class Solution {
  public:
    int minCoins(vector<int> &coins, int sum) {
        // STEP - 1
        vector<int> dp(sum + 1, INT_MAX);
        
        // STEP - 2
        dp[0] = 0;
        
        for(int i = 1; i <= sum; i++) {
            // I'm trying to iterate every element in the dp array
            for(int j = 0; j < coins.size(); j++) {
                // I'm trying to ietarte every elements in the coins array
                if(i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        if(dp[sum] == INT_MAX) {
            return -1;
        }
        
        return dp[sum];
        
    }
};
