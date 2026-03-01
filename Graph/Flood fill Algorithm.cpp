// GFG Link - https://www.geeksforgeeks.org/problems/flood-fill-algorithm1856/1?utm=codolio


// Solution ---->

class Solution {
  public:
    
    void DFS(vector<vector<int>>& image, int i, int j, int newColor, int orgColor) {
        
        //Condtions
        if(i >= image.size() || j >= image[0].size() || i < 0 || j < 0 || image[i][j] == newColor || image[i][j] != orgColor) {
            return ;
        }
        
        image[i][j] = newColor;
        DFS(image, i - 1, j, newColor, orgColor); // Go to Top
        DFS(image, i, j - 1, newColor, orgColor); // Go to Left
        DFS(image, i + 1, j, newColor, orgColor); // Go to Bottom
        DFS(image, i, j + 1, newColor, orgColor); // Go to Right
        
    }
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        DFS(image, sr, sc, newColor, image[sr][sc]);
        
        return image;
    }
};
