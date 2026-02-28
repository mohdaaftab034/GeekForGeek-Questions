// GFG Link - https://www.geeksforgeeks.org/problems/first-repeating-element4018/1?utm=codolio


// Solution --->

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n = arr.size();
        
        unordered_set<int> st;
        int index = -1;
        
        for(int i = n - 1; i >= 0; i--) {
            if(st.find(arr[i]) != st.end()) {
                index = i;
            } else {
                st.insert(arr[i]);
            }
        }
        
        return index == -1 ? -1 : index + 1;
    }
};
