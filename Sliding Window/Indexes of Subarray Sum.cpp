// GFG Link - https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions


// Solution --->> Sliding Window

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        
        int start = 0;
        int end;
        
        long long sum = 0;
        
        for(end = 0; end < n; end++) {
            sum += arr[end];
            
            while(sum > target && start < end) {
                sum -= arr[start];
                start++;
            }
            
            
            if(sum == target) {
                return {start + 1, end + 1};
            }
        }
        return {-1};
    }
};
