// GFG Link - https://www.geeksforgeeks.org/problems/house-robber-ii/1


// Top-Dwon Approach ---> Recursion + Memoization

class Solution {
  public:
  
    int solve(int i, int end, vector<int>& arr, vector<int>& dp) {
        if(i > end) return 0;
        
        // STEP - 3
        if(dp[i] != -1) 
            return dp[i];
        
        // Two cases are there 
        // First one is take if I take the value
        int include = arr[i] + solve(i + 2, end, arr, dp);
        
        // Second one is Not take the value which is not include in the sum
        int exclude = solve(i + 1, end, arr, dp);
        
        // STEP - 2
        return dp[i] = max(include, exclude);
    }
  
    int maxValue(vector<int>& arr) {
        int n = arr.size();
        
        // First we will take the index from 0 to n-2
        vector<int> dp1(n, -1);
        int case1 = solve(0, n - 2, arr, dp1);
        
        // Second we will take the index from 1 to n-1
        vector<int> dp2(n, -1);
        int case2 = solve(1, n - 1, arr, dp2);
        
        
        return max(case1, case2);
    }
};




// Bottom-up Approach ---> Tabulation Method
class Solution {
  public:
  
    int robLinear(vector<int>& arr, int start, int end) {
        int len = end - start + 1;
        vector<int> dp(len, 0);

        dp[0] = arr[start];
        if (len > 1)
            dp[1] = max(arr[start], arr[start + 1]);

        for (int i = 2; i < len; i++) {
            dp[i] = max(dp[i - 1], arr[start + i] + dp[i - 2]);
        }

        return dp[len - 1];
    }
  
    int maxValue(vector<int>& arr) {
        int n = arr.size();

        // Edge case
        if (n == 1) return arr[0];

        // Case 1: first include, last exclude
        int case1 = robLinear(arr, 0, n - 2);

        // Case 2: first exclude, last include
        int case2 = robLinear(arr, 1, n - 1);

        return max(case1, case2);
    }
};


// Space Optimization --->
class Solution {
  public:
  
    int robLinear(vector<int>& arr, int start, int end) {
        int prev1 = 0;
        int prev2 = 0;
        
        for (int i = start; i <= end; i++) {
            int curr = max(prev1, prev2 + arr[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
  
    int maxValue(vector<int>& arr) {
        int n = arr.size();

        // Edge case
        if (n == 1) return arr[0];

        // Case 1: first include, last exclude
        int case1 = robLinear(arr, 0, n - 2);

        // Case 2: first exclude, last include
        int case2 = robLinear(arr, 1, n - 1);

        return max(case1, case2);
    }
};
