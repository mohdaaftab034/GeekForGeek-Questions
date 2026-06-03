// GFG - https://www.geeksforgeeks.org/problems/task-scheduler/1?utm=codolio




// ------------------Solution----------------------
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        
        vector<int> mp(26, 0);
        
        for (char &ch: tasks) {
            mp[ch - 'A']++;
        }
        
        int time = 0;
        priority_queue<int> pq;
         
        for(int i = 0; i < 26; i++) {
            
            if(mp[i] > 0) {
                pq.push(mp[i]);
            }
            
        }
        
        
        while(!pq.empty()) {
            
            vector<int> temp;
            
            for(int i = 1; i <= K + 1; i++) {
                
                if(!pq.empty()) {
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
                
            }
            
            for(int &f: temp) {
                
                if (f > 0) {
                    pq.push(f);
                }
                
            }
            
            
            if(pq.empty()) {
                
                time += temp.size();
                
            } else {
                
                time += K + 1;
                
            }
        }
        
        return time;
    }
};
