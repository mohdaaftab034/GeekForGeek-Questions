// GFG Link - https://www.geeksforgeeks.org/problems/counting-sort/1



// ------------------------Solution--------------------------
class Solution {
  public:
    string countSort(string s) {
        int n = s.size();
        
        vector<int> count(26, 0);
        
        // Store frequency of the letters
        for(char ch : s) {
            count[ch - 'a']++;
        }
        
        int index = 0;
        for (int i = 0; i < 26; i++) {
            while(count[i] > 0) {
                s[index] = (i + 'a');
                index++;
                count[i]--;
            }
        }
        
        return s;
        
    }
};
