// GFG Link - https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1



// Top Down Approach ---> Recursion + Memoization

class Solution {
  public:
  
    int solve(int i, int end, vector<int>& arr, vector<int>& dp) {
        // BASE CASE
        if(i > end) return 0;
        
        // STEP - 3
        if(dp[i] != -1) return dp[i];
        
        
        // There are two cases 
        // First one is taking the value of index i
        int include = arr[i] + solve(i + 2, end, arr, dp);
        
        // Second will be exclude the value of index i
        int exclude = solve(i + 1, end, arr, dp);
        
        // STEP - 2
        return dp[i] = max(exclude, include);
    }
  
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        
        // STEP - 1 for Memoization
        vector<int> dp(n+1, -1);
        
        // n = 1
        if(n == 1) return arr[0];
        
        return solve(0, n - 1, arr, dp);
    }
};


// Bottom up Approach ---> Tabulation Method

class Solution {
  public:
  
    int solve(int start, int end, vector<int>& arr) {
        int len = end - start + 1;
        
        vector<int> dp(len, 0);
        
        dp[0] = arr[start];
        
        if(len > 1) 
            dp[1] = max(arr[start], arr[start+1]);
            
        for(int i = 2; i < len; i++) {
            dp[i] = max(dp[i - 1], arr[start + i] + dp[i - 2]);
        }
        
        return dp[len - 1];
    }
  
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        
        // n = 1
        if(n == 1) return arr[0];
        
        return solve(0, n - 1, arr);
    }
};


// Space Optimization --->
class Solution {
  public:
  
    int solve(int start, int end, vector<int>& arr) {
        int prev1 = 0;
        int prev2 = 0;
            
        for(int i = start; i <= end; i++) {
            int curr = max(prev1, arr[i] + prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
  
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        
        // n = 1
        if(n == 1) return arr[0];
        
        return solve(0, n - 1, arr);
    }
};
