// GFG Link - https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1



// -----------------Solution-------------------
class Solution {
  public:
    bool search(Node* root, int key) {
        // Base case -> if node is not present 
        if(root == NULL) {
            return false;
        }
        
        // Second base case -> if node is present
        if(root -> data == key) {
            return true;
        }
        
        // left call
        if(root -> data > key) {
            search(root -> left, key);
        } else { // Right call
            search(root -> right, key);
        }
    }
};
