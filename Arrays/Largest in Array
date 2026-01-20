// GFG Link - https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1



// Solution ---> 
Time Complexity: O(n)
Auxiliary Space: O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        
        int largest = arr[0];
        
        for(int i = 1; i < n; i++) {
            largest = max(largest, arr[i]);
        }
        
        return largest;
    }
};
