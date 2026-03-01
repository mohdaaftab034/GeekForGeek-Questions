// GFG Link - https://www.geeksforgeeks.org/problems/find-unique-element2632/1



// Solution ---> 

class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(auto it : mp) {
            if(it.second == 1) {
                return it.first;
            }
        }
        
        return -1;
    }
};
