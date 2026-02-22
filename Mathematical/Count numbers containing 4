// GFG Link - https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1?utm=codolio


// Solution --->


class Solution {
  public:
  
    bool checkFour(int num) {
        while(num >= 4) {
            if(num%10 == 4){
                return true;
            }
            num /= 10;
        }
        
        return false;
    }
    
    int countNumberswith4(int n) {
       int count = 0;
       
       for(int i = 1; i <= n; i++) {
           if(checkFour(i)){
               count++;
           }
       }
       
       return count;
    }
};
