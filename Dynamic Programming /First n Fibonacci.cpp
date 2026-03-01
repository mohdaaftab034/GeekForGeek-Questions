// GFG Link - https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?utm=codolio


// Solution ---> Recursion

// User function template for C++

class Solution {
  public:
  
    int solve(int n) {
        if(n <= 1) {
            return n;
        }
        
        return solve(n-1) + solve(n-2);
    }
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        vector<int> result;
        
        for(int i = 0; i < n; i++) {
            result.push_back(solve(i));
        }
        
        return result;
    }
};


// Solution --- > Top-down Approach ---> Recursion + Memoization

// User function template for C++

class Solution {
  public:
  
    int solve(int n, vector<int>& dp) {
        if(n <= 1) {
            return n;
        }
        
        // STEP - 3
        if(dp[n] != -1) {
            return dp[n];
        }
        
        // STEP - 2
        return dp[n] = solve(n-1, dp) + solve(n-2, dp);
    }
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        vector<int> result;
        
        // STEP - 1
        vector<int> dp(n, -1);
        
        for(int i = 0; i < n; i++) {
            result.push_back(solve(i, dp));
        }
        
        return result;
    }
};


// Solution ---> Bottom-up Approach ----> Tabulation Method

class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        
        vector<int> result;
        
        if(n == 0)
            return result;
            
        if(n >= 1)
            result.push_back(0);
            
        if(n >= 2)
            result.push_back(1);
            
        for(int i = 2; i < n; i++) {
            result.push_back(result[i-1] + result[i-2]);
        }
        
        return result;
    }
};
