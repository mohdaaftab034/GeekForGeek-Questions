// GFG Link - https://www.geeksforgeeks.org/problems/key-pair5616/1?utm_source=chatgpt.com


// Solution ---> Optimized Solution
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        
        int n = arr.size();
        
        unordered_map<int, int> mp;
        
        // Iterate the every elements in the array
        
        for(int i = 0; i < n; i++) {
            int first = arr[i];
            int second = target - first;
            
            // Find the second element in the map
            
            if(mp.find(second) != mp.end()) {
                return true;
            }
            
            // Store the element and index in the map
            
            mp[first] = i;
        }
        
        return false;
    }
};
