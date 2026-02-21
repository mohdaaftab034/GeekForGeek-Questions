// GFG Link - https://www.geeksforgeeks.org/problems/insertion-sort/1?utm=codolio


// Solution --->

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            
            // Move elements greater than key
            while(j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            
            arr[j + 1] = key;
        }
    }
};
