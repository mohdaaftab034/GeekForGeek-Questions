// GFG Link - https://www.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array4141/1



// Solution ---> 

// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        
        int n = arr.size();
        vector<int>ans;
        unordered_set<int> st;
        
        for(int i = 0; i < n; i++) {
            if(st.find(arr[i]) != st.end()) {
                continue;
            } else {
                ans.push_back(arr[i]);
            }
            st.insert(arr[i]);
        }
        
        return ans;
    }
};
