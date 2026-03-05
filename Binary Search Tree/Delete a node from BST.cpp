// GFG Link - https://www.geeksforgeeks.org/problems/delete-a-node-from-bst/1?utm=codolio


// ----------------Solution-------------------
class Solution {
  public:
  
    Node* maxValue(Node* root) {
        Node* temp = root;
        
        while(temp -> right != NULL) {
            temp = temp -> right;
        }
        
        return temp;
    }
  
    Node* delNode(Node* root, int x) {
        // Base case -> if x is not present in BST
        if(root == NULL) {
            return root;
        }
        
        // Second base case -> if x is present in BST
        if(root -> data == x) {
            // kuchh kuchh karna hai
            
            // if right and left of the root is null
            if(root -> left == NULL && root -> right == NULL) {
                delete root;
                return NULL;
            }
            
            // if left of root is not NULL and right os root is null
            if(root -> left != NULL && root -> right == NULL) {
                Node* temp = root -> left;
                delete root;
                return temp;
            }
            
            // if left of root is null and right of root is not null
            if(root -> left == NULL && root -> right != NULL) {
                Node* temp = root -> right;
                delete root;
                return temp;
            }
            
            // if root and right is not null
            if(root -> left != NULL && root -> right != NULL) {
                int maxi = maxValue(root -> left) -> data;
                root -> data = maxi;
                root -> left = delNode(root -> left, maxi);
                
                return root;
            }
        }
        
        // left call
        if (root -> data > x) {
            root -> left  = delNode(root -> left, x);
            return root;
        } // right call
        else {
            root -> right = delNode(root -> right, x);
            return root;
        }
    }
};
