// GFG Link - https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?utm=codolio


// Recursion 
class Solution {
  public:
  
    int solve(int n) {
        if(n <= 1) return n;
        
        
        return solve(n - 1) + solve(n - 2);
    }
    
    int nthFibonacci(int n) {
        
        
        return solve(n);
    }
};


// Solution ---> Recursion + Memoization 
class Solution {
  public:
  
    int solve(int n, vector<int>& dp) {
        if(n <= 1) return n;
        
        // STEP - 3
        if(dp[n] != -1) return dp[n];
        
        // STEP - 2
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }
    
    int nthFibonacci(int n) {
        
        // STEP - 1
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};



// Solution ---> Bottom-up ----> Tabulation
class Solution {
  public:
    int nthFibonacci(int n) {
        
        // STEP - 1
        vector<int> dp(n+1);
        
        // STEP - 2
        dp[0] = 0;
        dp[1] = 1;
        
        // STEP - 3
        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
    }
};


// Optimization --->
class Solution {
  public:
    int nthFibonacci(int n) {
        if(n == 0) return 0;
        
        if(n == 1) return 1;
        
        int prev2 = 0;
        int prev1 = 1;
        int curr;
        
        for(int i = 2; i <= n; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
};
