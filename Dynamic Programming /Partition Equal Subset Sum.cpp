// GFG - https://www.geeksforgeeks.org/problems/subset-sum-problem2014/1?utm=codolio




// --------------------Solution---------------------
class Solution {
  public:
  
    bool subsetSum(int idx, int target, vector<int>& arr, vector<vector<int>> & dp) {
        if(target == 0) {
            return true;
        }
        
        if(idx >= arr.size() - 1) {
            return false;
        }
        
        if(dp[idx][target] != -1) {
            return dp[idx][target];
        }
        
        
        bool notTake = subsetSum(idx + 1, target, arr, dp);
        
        bool take = 0;
        if(arr[idx] <= target) {
            take = subsetSum(idx + 1, target - arr[idx], arr, dp);
        }
        
        
        return dp[idx][target] = take || notTake;
    }
  
    bool equalPartition(vector<int>& arr) {
        int n = arr.size();
        
        int totalSum = 0;
        
        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        
        if(totalSum % 2 != 0) {
            return false;
        }
        
        int target = totalSum / 2;
        
        vector<vector<int>> dp(n, vector<int> (target + 1, -1));
        
        return subsetSum(0, target, arr, dp);
    }
};
