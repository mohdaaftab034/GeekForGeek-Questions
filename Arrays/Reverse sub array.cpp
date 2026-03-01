// GFG Link - https://www.geeksforgeeks.org/problems/reverse-sub-array5620/1



// Solution ---> 

// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        int n = arr.size();
        
        int start = l - 1;
        int end = r - 1;
        
        while(start < end) {
            swap(arr[start], arr[end]);
            
            start++;
            end--;
        }
        
        return arr;
    }
};
