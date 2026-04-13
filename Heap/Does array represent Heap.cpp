// Problem - https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1?utm=codolio




// -----------------Solution--------------------

class Solution {
  public:
    bool isMaxHeap(int arr[], int n) {
        
        for(int i = 0; i <= (n-2)/2; i++) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            
            if(left < n && arr[left] > arr[i]) 
                return 0;
            
            if(right < n && arr[right] > arr[i]) 
                return 0;
        }
        
        return 1;
    }
};
