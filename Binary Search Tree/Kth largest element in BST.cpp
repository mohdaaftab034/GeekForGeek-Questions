// GFG Link - https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1?utm=codolio



// -----------------Solution -> 1--------------------
class Solution {
  public:
  
    int solve(Node* root, int& i, int k) {
        if(root == NULL) {
            return -1;
        }
        
        int right = solve(root -> right, i, k);
        
        if(right != -1) {
            return right;
        }
        
        i++;
        if(i == k) {
            return root -> data;
        }
        
        return solve(root -> left, i, k);
    }
  
    int kthLargest(Node *root, int k) {
        int i = 0;
        
        int ans = solve(root, i, k);
        
        return ans;
    }
};


// ----------------Solution -> 2--------------------
class Solution {
  public:
  
    void inorder(Node* root, vector<int>& ans) {
        // Base case
        if(root == NULL) {
            return ;
        }
        
        inorder(root -> left, ans);
        // Push the root node in ans
        ans.push_back(root -> data);
        inorder(root -> right, ans);
    }
  
    int kthLargest(Node *root, int k) {
        vector<int> ans;
        
        inorder(root, ans);
        
        return ans[ans.size() - k];
    }
};
