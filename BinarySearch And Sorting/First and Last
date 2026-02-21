// GFG Link - https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x2041/1?utm=codolio



class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int n = arr.size();
        
        int first = -1;
        int last = -1;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                if(first == -1) {
                    first = i;
                }
                
                last = i;
            }
        }
        
        if(first == -1) return {-1};
        
        return {first, last};
    }
};


// Solution - 2 ---> Binary Search
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
    
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int first = findFirst(x, arr);
        if(first == -1) return {-1};
        
        int last = findLast(x, arr);
        return {first, last};
    }
};
