// GFG Link - https://www.geeksforgeeks.org/problems/merge-and-sort5821/1



// -----------------------Solution------------------------
class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        set < int > s;
        
        int m = arr1.size();
        int n = arr2.size();
        
        for (int i = 0; i < m; i++) {
            s.insert(arr1[i]);
        }
        
        for (int i = 0; i < n; i++) {
            s.insert(arr2[i]);
        }
        
        vector<int> result;
        
        for (auto it : s) {
            result.push_back(it);
        }
        
        return result;
    }
};
