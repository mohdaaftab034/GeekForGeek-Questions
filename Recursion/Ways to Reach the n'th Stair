// GFG Link - "https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1"


// Solution --->
class Solution {
  public:
  
    int solve(int nStairs, int i) {
        
        // Base case
        if(i == nStairs) {
            return 1;
        }
        
        if(i > nStairs) {
            return 0;
        }
        
        // Recursive relation
        return (solve(nStairs, i + 1) + solve(nStairs, i + 2));
    }
  
    int countWays(int n) {
        
        int ans = solve(n, 0);
        
        return ans;
    }
};
