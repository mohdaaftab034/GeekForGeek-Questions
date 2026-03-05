// GFG Link - https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1


// ---------------Solution-------------------
class Solution {
  public:
    int minValue(Node* root) {
        Node* temp = root;
        
        while(temp -> left != NULL) {
            temp = temp -> left;
        }
        
        return temp -> data;
    }
};
