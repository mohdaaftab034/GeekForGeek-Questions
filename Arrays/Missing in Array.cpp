// GFG Link - https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions



// ----------------------Solution------------------------
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long n = arr.size();
        long arrSum = 0;
        
        for(long i = 0; i < n; i++) {
            arrSum += arr[i];
        }
        
        long actualSum = (n+1)*(n+2) / 2;
        
        long missElement = actualSum - arrSum;
        
        return missElement;
    }
};
