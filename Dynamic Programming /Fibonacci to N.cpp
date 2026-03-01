// GFG Link - "https://www.geeksforgeeks.org/problems/fibonacci-to-n0811/1"



class Solution {
  public:
    vector<int> nFibonacci(int N) {
        // code here
                // Base cases
        vector<int> result;
        result.push_back(0);
        if (N == 0) return result;

        result.push_back(1);

        int c = result[0] + result[1];
        while (c <= N) {
            result.push_back(c);
            int size = result.size();
            c = result[size - 2] + result[size - 1];
        }

        return result;

    }
};
