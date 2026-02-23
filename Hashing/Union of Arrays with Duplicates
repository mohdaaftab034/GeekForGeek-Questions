// GFG Link - https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?utm=codolio



// Solution --->
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        
        set<int> st; // Set stores only unique elements
        
        for(int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
        
        for(int i = 0; i < m; i++) {
            st.insert(b[i]);
        }
        
        // Convert the set into vector
        vector<int> result(st.begin(), st.end());
        
        return result;
    }
};
