// GFG Link - https://www.geeksforgeeks.org/problems/height-of-heap5025/1?utm=codolio



// --------------------Solution---------------------
class Solution {
  public:
    int heapHeight(int n, int arr[]) {
        int height = 0;
        
        if(n == 1) return 1;
        
        while(n > 1) {
            n = n / 2;
            height++;
        }
        
        return height;
    }
};
