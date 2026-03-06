// GFG Link - https://www.geeksforgeeks.org/problems/k-largest-elements4206/1?utm=codolio



// ---------------Solution-----------------
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // sort the array
        
        int n = arr.size();
        vector<int> ans;
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < k; i++) {
            ans.push_back(arr[n-i-1]);
        }
        
        return ans;
    }
};
