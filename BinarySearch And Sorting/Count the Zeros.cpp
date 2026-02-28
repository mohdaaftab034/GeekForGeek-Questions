// GFG Link - https://www.geeksforgeeks.org/problems/count-the-zeros2550/1?utm=codolio


// Solution --->

// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int n = arr.size();
        
        int start = 0;
        int end = n - 1;
        int first_index_zero = -1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == 0) {
                first_index_zero = mid;
                end = mid - 1;
            } else if(arr[mid] == 1) {
                start = mid + 1;
            }
        }
        
        if(first_index_zero == -1) {
            return 0;
        }
        
        return n - first_index_zero;
    }
};
