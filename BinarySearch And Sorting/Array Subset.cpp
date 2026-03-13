// GFG Link - https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?utm=codolio


class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;
        
        for(int num: a) {
            freq[num]++;
        }
        
        for(int num: b) {
            if(freq[num] == 0) { // element is not present in A
                return false;
            }
            
            freq[num]--;
        }
        
        return true;
    }
};

