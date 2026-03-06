// GFG Link - https://www.geeksforgeeks.org/problems/check-for-bst/1?utm=codolio


// ------------------Solution -> 1------------------
class Solution {
  public:
  
    bool isBST(Node* root, int min, int max) {
        // base case
        if(root == NULL) {
            return true;
        }
        
        // validate BST
        if(root -> data > min && root -> data < max) {
            bool left = isBST(root -> left, min, root -> data);
            int right = isBST(root -> right, root -> data, max);
            
            return left && right;
        } else {
            return false;
        }
        
    }
  
    bool isBST(Node* root) {
        
        return isBST(root, INT_MIN, INT_MAX);
    }
};



// -------------------Solution -> 2---------------------
class Solution {
  public:
  
    void inorder(Node* root, vector<int>& ans) {
        
        // Base case
        if(root == NULL) {
            return ;
        }
        
        inorder(root -> left, ans);
        ans.push_back(root -> data);
        inorder(root -> right, ans);
        
    }
  
    bool isBST(Node* root) {
        
        // Base case
        if(root == NULL) {
            return true;
        }
        
        vector<int> ans;
        
        inorder(root, ans);
        
        
        
        for(int i = 0; i < ans.size() -1; i++) {
            if(ans[i] > ans[i+1]) {
                return false;
            }
        }
        
        return true;
    }
};


