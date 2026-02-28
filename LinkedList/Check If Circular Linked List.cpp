// GFG Link - https://www.geeksforgeeks.org/problems/circular-linked-list/1?utm=codolio


// Solution --->

class Solution {
  public:
    bool isCircular(Node *head) {
        if(head == NULL)
            return false;

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }
};
