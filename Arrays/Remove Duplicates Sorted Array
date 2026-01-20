// GFG Link - https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1


// Solution ---> 
Time Complexity: O(n)
Auxiliary Space: O(n)

class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        
        if(n == 0) return {};
        
        vector<int> result;
        
        result.push_back(arr[0]);
        
        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[i-1]) {
                result.push_back(arr[i]);
            }
        }
        
        return result;
    }
};


// Solution  - 2

Time Complexity: O(n)
Auxiliary Space: O(1)

class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        
        if(n == 0) return {};
        
        int index = 1;
        
        
        
        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[i-1]) {
                arr[index] = arr[i];
                index++;
            }
        }
        
        arr.resize(index);
        
        return arr;
    }
};
