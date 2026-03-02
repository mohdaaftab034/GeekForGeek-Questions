// GFG Link - https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1?utm=codolio


// ---------- Solution ------------
class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        
        for(char ch : s) {
            
            // Every opening breacket push into the stack
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                
                // if stack is empty -> No matching opening breackets
                if(st.empty()) return false;
                
                char top = st.top();
                st.pop();
                
                if((ch == ')' && top != '(') || 
                    (ch == '}' && top != '{') || 
                    ch == ']' && top != '[') {
                    return false;
                }
            }
        }
        
        // if(st.empty()) {
        //     return true;
        // }
        
        return st.empty();
    }
};
