// Problem - https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1?utm=codolio




// ---------------------Solution------------------------
// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int n = arr.size();
        
        int maxi = *max_element(begin(arr),end(arr));
        
        if(maxi < x) {
            return -1;
        } 
        
        int l = 0;
        int r = n - 1;
        
        while(l < r) {
            
            int mid = l + (r - l) / 2;
            
            if(arr[mid] >= x) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        
        return r;
    }
};
