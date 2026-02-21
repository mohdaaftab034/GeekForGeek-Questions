// GFG Link - https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?utm=codolio



// Solution --->

class Solution {
  public:
  
    int findFirst(int x, vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        int first = -1;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(arr[mid] == x) {
                first = mid;
                high = mid - 1;  // move left
            }
            else if(arr[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return first;
    }
    
    int findLast(int x, vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        int last = -1;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(arr[mid] == x) {
                last = mid;
                low = mid + 1;  // move right
            }
            else if(arr[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return last;
    }
    vector<int> find(vector<int>& arr, int x) {
         int first = findFirst(x, arr);
        
        int last = findLast(x, arr);
        return {first, last};
    }
};
