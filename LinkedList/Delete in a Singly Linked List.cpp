// GFG Link - https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1



// -----------------------Solution-----------------------------
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {

        // if deleting first node
        if(x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* temp = head;
        Node* prev = NULL;
        int count = 1;

        while(temp != NULL && count < x) {
            prev = temp;
            temp = temp->next;
            count++;
        }

        if(temp != NULL) {
            prev->next = temp->next;
            delete temp;
        }

        return head;
    }
};
