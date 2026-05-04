// GFG Problem - https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?utm=codolio



// ---------------------Solution-----------------------
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        int n = arr.size();
        
        string ans = "";
        
        
        for(int i = 0; i < arr[0].size(); i++) {
            char ch = arr[0][i];
            bool match = true;
            
            for(int j = 1; j < n; j++) {
                if(ch != arr[j][i] || arr[j].size() < i) {
                    match = false;
                    break;
                }
            }
            
            if(match == false) {
                break;
            } else {
                ans.push_back(ch);
            }
        }
        
        return ans;
    }
};
