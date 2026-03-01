// GFG Link - https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1




// Top-down Approach ----> Recursion + Memoization

class Solution {
  public:
  
    int solve(vector<int>& wt, vector<int>& val, int index, int capacity, vector<vector<int>>& dp) {
        if(index == 0) {
            if(wt[0] <= capacity) {
                return val[0];
            }
            else {
                return 0;
            }
        }
        
        // STEP - 3
        if(dp[index][capacity] != -1)
            return dp[index][capacity];
        
        int include = 0;
        if(wt[index] <= capacity) {
            include = val[index] + solve(wt, val, index - 1, capacity - wt[index], dp);
        }
        
        int exclude = 0 + solve(wt, val, index - 1, capacity, dp);
        
        // STEP - 2
        return dp[index][capacity] = max(include, exclude);
    }
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        
        // STEP - 1
        vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
        
        return  solve(wt, val, n-1, W, dp);
    }
};



// Bottom-up Approach --->

class Solution {
  public:
  
    int solve(vector<int>& wt, vector<int>& val, int index, int capacity, vector<vector<int>>& dp) {
        if(index == 0) {
            if(wt[0] <= capacity) {
                return val[0];
            }
            else {
                return 0;
            }
        }
        
        // STEP - 3
        if(dp[index][capacity] != -1)
            return dp[index][capacity];
        
        int include = 0;
        if(wt[index] <= capacity) {
            include = val[index] + solve(wt, val, index - 1, capacity - wt[index], dp);
        }
        
        int exclude = 0 + solve(wt, val, index - 1, capacity, dp);
        
        // STEP - 2
        return dp[index][capacity] = max(include, exclude);
    }
    
    
    int solveTab(vector<int>& wt, vector<int>& val, int n, int capacity) {
        // STEP - 1
        vector<vector<int>> dp(n, vector<int> (capacity + 1, 0));
        
        // STEP - 2
        for(int r = wt[0]; r <= capacity; r++) {
            if(wt[0] <= capacity) {
                dp[0][r] = val[0];
            } else {
                dp[0][r] = 0;
            }
        }
        
        for(int index = 1; index < n; index++) {
            for(int w = 0; w <= capacity; w++) {
                int include = 0;
                
                if(wt[index] <= w){
                    include = val[index] + dp[index - 1][w - wt[index]];
                }
                
                int exclude = dp[index - 1][w];
                
                
                dp[index][w] = max(include, exclude);
            }
        }
        
        return dp[n - 1][capacity];
        
    }
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        
        return  solveTab(wt, val, n, W);
    }
};
