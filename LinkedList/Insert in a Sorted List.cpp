// GFG Link - https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1?utm=codolio


// Solution --->
class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        
        Node* newNode = new Node(key);
        
        if(head == NULL || head->data > key) {
            newNode->next = head;
            return newNode;
        }
        
        Node* curr = head;
        
        while(curr->next != NULL && curr->next->data < key) {
            curr = curr->next;
        }
        
        newNode->next = curr->next;
        curr->next = newNode;
        
        return head;
    }
};
