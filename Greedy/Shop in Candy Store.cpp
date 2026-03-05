// GFG Link - https://www.geeksforgeeks.org/problems/shop-in-candy-store1145/1



// ------------------Solution--------------------
class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        int min_amount = 0;
        int max_amount = 0;
        
        // Sort the array
        sort(prices.begin(), prices.end());
        
        // For minimum amount
        int i = 0, j = n - 1;
        
        while(i <= j) {
            min_amount += prices[i];
            i++;
            j -= k;
        }
        
        // for Maximum amount
        i = n-1, j = 0;
        while(i >= j) {
            max_amount += prices[i];
            i--;
            j += k;
        }
        
        vector<int> ans;
        ans.push_back(min_amount);
        ans.push_back(max_amount);
        
        return ans;
    }
};
