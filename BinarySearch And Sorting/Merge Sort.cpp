// GFG Link - https://www.geeksforgeeks.org/problems/merge-sort/1




// ---------------------Solution----------------------
class Solution {
  public:
  
    void merge(vector<int>& arr, int start, int mid, int end) {
        int n1 = mid - start + 1;
        int n2 = end - mid;
        
        vector<int> l(n1), r(n2);
        
        for (int i = 0; i < n1; i++) {
            l[i] = arr[start + i];
        }
        
        for (int i = 0; i < n2; i++) {
            r[i] = arr[mid + 1 + i];
        }
        
        int i = 0;
        int j = 0;
        int k = start;
        
        while (i < n1 && j < n2) {
            if(l[i] <= r[j]) {
                arr[k] = l[i];
                i++;
            } else {
                arr[k] = r[j];
                j++;
            }
            
            k++;
        }
        
        // Agar kuchh elements n1 ya n2 me rah jate hai tab
        while(i < n1) {
            arr[k] = l[i];
            i++;
            k++;
        }
        
        while(j < n2) {
            arr[k] = r[j];
            j++;
            k++;
        }
        
    }
  
    void mergeSort(vector<int>& arr, int start, int end) {
        
        // Merge Sort Algorithms
        if(start < end) {
            int mid = (start + end) / 2;
            
            mergeSort(arr, start, mid);
            mergeSort(arr, mid+1, end);
            // Merge the sorted arrays
            merge(arr, start, mid, end);
        }
        
    }
};
