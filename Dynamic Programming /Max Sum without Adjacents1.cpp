// GFG Link - https://www.geeksforgeeks.org/problems/max-sum-without-adjacents--170645/1


// Solution ---> Recursion + Memoization ----> top-down Approach

// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int solveMem(int i, int end, vector<int>& arr, vector<int>& dp) {
        if(i > end) return 0;
        
        // STEP - 3
        if(dp[i] != -1) return dp[i];
        
        // There are two ways first is taken and second is not taken
        int taken = arr[i] + solveMem(i + 2, end, arr, dp);
        
        int notTaken = solveMem(i + 1, end, arr, dp);
        
        // STEP - 2
        return dp[i] = max(taken, notTaken);
    }
    
    int findMaxSum(vector<int>& arr, int n) {
        
        if(n == 0) return arr[0];
        
        // STEP - 1
        vector<int> dp(n+1, -1);
        
        return solveMem(0, n-1, arr, dp);
    }
};


// Bottom-up Approach ---> Tabulation Method
// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int solveTab(int start, int end, vector<int>& arr) {
        
        int len = end - start + 1;
        // STEP - 1
        vector<int> dp(len, 0);
        dp[0] = arr[start];
        
        if(len > 1)
            dp[1] = max(arr[start], arr[start + 1]);
            
        for(int i = 2; i < len; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + arr[start + i]);
        }
        
        return dp[len - 1];
    }
    
    int findMaxSum(vector<int>& arr, int n) {
        
        if(n == 0) return arr[0];
        
        
        return solveTab(0, n-1, arr);
    }
};

// Space Optimization ----->
// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int solve(int start, int end, vector<int>& arr) {
        int prev1 = 0;
        int prev2 = 0;
        
        for(int i = start; i <= end; i++) {
            int curr = max(prev1, prev2 + arr[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
    
    int findMaxSum(vector<int>& arr, int n) {
        
        if(n == 0) return arr[0];
        
        
        return solve(0, n-1, arr);
    }
};
