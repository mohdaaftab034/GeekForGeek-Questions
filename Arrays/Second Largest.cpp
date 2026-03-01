// GFG Link - https://www.geeksforgeeks.org/problems/second-largest3735/1


// Solution --->

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        
        int largest = 0;
        int sec_largest = -1;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] < largest && arr[i] > sec_largest) {
                sec_largest = arr[i];
            }
        }
        
        return sec_largest;
    }
};
