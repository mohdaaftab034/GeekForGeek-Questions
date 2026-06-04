// Problem - https://www.geeksforgeeks.org/problems/koko-eating-bananas/1?utm=codolio



// ---------------Solution------------------
class Solution {
  public:
  
    bool canEatBananas(vector<int>& arr, int mid, int h) {
        
        int actualHours = 0;
        
        for(int & x: arr) {
            
            actualHours += x / mid;
            
            if(x % mid != 0) {
                actualHours++;
            }
        }
        
        return actualHours <= h;
    }
  
    int kokoEat(vector<int>& arr, int k) {
        int n = arr.size();
        
        int l = 1; 
        int r = *max_element(begin(arr), end(arr));
        
        while(l < r) {
            
            int mid = l + (r - l) / 2;
            
            if(canEatBananas(arr, mid, k)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        
        return l;
    }
};
