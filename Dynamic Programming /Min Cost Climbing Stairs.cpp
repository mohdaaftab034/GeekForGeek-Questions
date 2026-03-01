// GFG Link - "https://www.geeksforgeeks.org/problems/min-cost-climbing-stairs/1"


// Top-Down Approach ---> Recusion + Memoiazation
//Back-end complete function Template for C++

class Solution {
  public:
  
    int solve(vector<int>& cost, int n, vector<int>& dp) {
        // BASE CASE
      
        if(n == 0) {
            return cost[0];
        }
        
        if(n == 1) {
            return cost[1];
        }
        
        // STEP - 3
        if(dp[n] != -1) {
            return dp[n];
        }
        
        int ans = cost[n] + min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
        
        // STEP - 2
        return dp[n] = ans;
        
    }
  
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // STEP - 1
        vector<int> dp(n+1, -1);
        int ans = min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
        
        return ans;
    }
};


// Bottom-Up Approach --->
//Back-end complete function Template for C++

class Solution {
  public:
  
    int solve(vector<int>& cost, int n) {
        // STEP - 1
        vector<int> dp(n+1);
        
        // STEP - 2
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        // STEP - 3
        for(int i = 2; i < n; i++) {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        
        return min(dp[n-1], dp[n-2]);
    }
  
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        return solve(cost, n);
    }
};


// Space Optimization --->
//Back-end complete function Template for C++

class Solution {
  public:
  
    int solve(vector<int>& cost, int n) {
        // STEP - 1
        int prev2 = cost[0];
        int prev1 = cost[1];
        
        // STEP - 2
        for(int i = 2; i < n; i++) {
            int curr = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        
        return min(prev1, prev2);
    }
  
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        return solve(cost, n);
    }
};
