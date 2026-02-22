// GFG Link - https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1?utm=codolio


// Solution --->

// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        int n = arr.size();
        
        int left = 0;
        int right = n - 1;
        
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> result;
        
        while(left < right) {
            int sum = arr[left] + arr[right];
            
            if(sum == 0) {
                result.push_back({arr[left], arr[right]});
                
                int left_val = arr[left];
                int right_val = arr[right];
                
                while(left < right && arr[left] == left_val) {
                    left++;
                }
                
                while(left < right && arr[right] == right_val) {
                    right--;
                }
            } else if(sum < 0) {
                left++;
            } else {
                right--;
            }
        }
        
        return result;
    }
};
