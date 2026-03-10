// GFG Link - https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1



// --------------------Solution-----------------------
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* root, int key) {
        // Base Case
        if(root == NULL) {
            Node* newNode = new Node(key);
            return newNode;
        }
        
        // There are two case 
        // First one is -> Go to left side
        if(root -> data > key) {
            root -> left = insert(root -> left, key);
        }
        // Second is -> Go to right side
        else {
            root -> right = insert(root -> right, key);
        }
        
        
        return root;
    }
};
