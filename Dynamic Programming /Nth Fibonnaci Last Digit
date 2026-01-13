// GFG Link - "https://www.geeksforgeeks.org/problems/the-nth-fibonnaci3150/1"



// Solution --->
// Top Down Approach--->
class Solution {
  public:
  
    int calcLastDigit(vector<int> &dp, int n) {
        if(n <= 1) {
            return n;
        }
        
        if(dp[n] != -1) {
            return dp[n];
        }
        
        dp[n] = calcLastDigit(dp, n-1) + calcLastDigit(dp, n-2);
        
        return dp[n]%10;
      
    }
    
    int fib(int N) {
        vector<int> dp(N+1, -1);
        
        return calcLastDigit(dp, N);
    }
};


// Bottom-Up Approach --->
class Solution {
  public:
    int fib(int N) {
        vector<int> dp(N+1);

        dp[0] = 0;
        if (N >= 1) dp[1] = 1;

        for (int i = 2; i <= N; i++) {
            dp[i] = (dp[i-1] + dp[i-2]) % 10;
        }

        return dp[N];
    }
};
