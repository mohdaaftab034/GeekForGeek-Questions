// GFG - https://www.geeksforgeeks.org/problems/k-largest-elements4206/1?utm=codolio



// ---------------------Solution - 1-----------------------
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        
        vector<int> ans;
        
        // Sort Array in ascending order
        sort(begin(arr), end(arr), greater<int>());
        
        
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};



// -------------------Solution - 2--------------------------
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        
        vector<int> ans;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (int & num : arr) {
            pq.push(num);
            
            if(pq.size() > k) {
                pq.pop();
            }
        }
        
        while(!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
