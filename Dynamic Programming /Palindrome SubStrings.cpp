// GFG Link - https://www.geeksforgeeks.org/problems/count-palindrome-sub-strings-of-a-string0652/1


// --------------Solution-------------------
class Solution {
public:
    
    int expand(string &s, int left, int right) {
        int count = 0;
        
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
        
        return count;
    }
    
    int countPS(string &s) {
        int n = s.size();
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            // Odd length palindrome
            count += expand(s, i, i);
            
            // Even length palindrome
            count += expand(s, i, i + 1);
        }
        
        return count - n;  // if excluding single characters
    }
};
