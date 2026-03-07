// GFG Link - https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?utm=codolio



// ------------------Solution--------------------
class Solution {
  public:
    int getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast -> next != NULL) {
            
            if(fast -> next == NULL) {
                return slow -> next -> data;
            }
            
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return slow -> data;
    }
};
