// GFG Link - https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1?utm=codolio



// --------------------Solution-----------------------
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }
    
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int, int>> temp;
        int n = start.size();
        
        for(int i = 0; i < n; i++) {
            pair<int, int> p = make_pair(start[i], end[i]);
            temp.push_back(p);
        }
        
        sort(temp.begin(), temp.end(), cmp);
        
        int count = 1;
        int ansEnd = temp[0].second;
        
        for(int i = 1; i < n; i++) {
            if(temp[i].first > ansEnd) {
                count++;
                ansEnd = temp[i].second;
            }
        }
        
        return count;
    }
};
