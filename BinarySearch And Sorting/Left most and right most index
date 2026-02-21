// GFG Link - https://www.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1?utm=codolio


// Solution --->

class Solution {
  public:
  
    int firstIndex(vector<long long>& arr, long long x, int n) {
        int start = 0; 
        int end = n - 1;
        int first = -1;
        
        while(start <= end) {
           int mid = start + (end - start) / 2;
            
            if(arr[mid] == x) {
                first = mid;
                end = mid - 1;
            } else if(arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return first;
    }
    
    int lastIndex(vector<long long>& arr, long long x, int n) {
        int start = 0; 
        int end = n-1;
        int last = -1;
        
        while (start <= end) {
           int mid = start + (end - start) / 2;
            
            if(arr[mid] == x) {
                last = mid;
                start = mid + 1;
            } else if(arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return last;
    }
  
    pair<long, long> indexes(vector<long long> v, long long x) {
        int n = v.size();
        
        int first = firstIndex(v, x, n);
        int last = lastIndex(v, x, n);
        
        return {first, last};
    }
};
