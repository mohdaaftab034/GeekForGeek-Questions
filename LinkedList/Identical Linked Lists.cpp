// GFG Link - https://www.geeksforgeeks.org/problems/identical-linked-lists/1?utm=codolio


// Solution --->
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        if(head1 == NULL || head2 == NULL) {
            return false;
        }
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data != temp2->data) {
                return false;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        if(temp1 == NULL && temp2 == NULL) return true;
        
        return false;
    }
};
