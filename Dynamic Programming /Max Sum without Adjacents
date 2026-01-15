// GFG Link - https://www.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1?page=3&category=Dynamic%20Programming&sortBy=submissions


// Top-down Approach ---> Recursion + Memoization
// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int solve(vector<int>& arr, int n, vector<int>& dp) {
        if(n < 0)
            return 0;
        
        if(n == 0) 
            return arr[0];
        
        // STEP - 3
        if(dp[n] != -1)
            return dp[n];
            
        int incl = solve(arr, n-2, dp) + arr[n];
        int excl = solve(arr, n-1, dp) + 0;
        
        // STEP - 2
        return dp[n] = max(incl, excl);
    }
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        
        // STEP - 1
        vector<int> dp(n+1, -1);
        
        int ans =solve(arr, n-1, dp);
        return ans;
    }
};


// Bottom-up Approach ---> Tabulation Method
// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        
        int n = arr.size();
        
        // STEP - 1
        vector<int> dp(n);
        // STEP - 2
        dp[0] = arr[0];
        
        // STEP - 3
        for(int i = 1; i < n; i++) {
            int incl = dp[i-2] + arr[i];
            int excl = dp[i-1] + 0;
            
            dp[i] = max(incl, excl);
        }
        
        return dp[n-1];
    }
};


// Space Optimization ---> 
// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        
        int n = arr.size();
        
        int prev2 = 0;
        int prev1 = arr[0];
        
        // STEP - 3
        for(int i = 1; i < n; i++) {
            int incl = prev2 + arr[i];
            int excl = prev1 + 0;
            
            int ans = max(incl, excl);
            prev2 = prev1;
            prev1 = ans;
        }
        
        return prev1;
    }
};
