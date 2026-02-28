// GFG Link - https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?utm=codolio


// Solution --->

/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        
        // Create a new node
        Node* newNode = new Node(x);
        
        // Head is equal to null then I will return the newNode simply
        if(head == NULL) {
            return newNode;
        }
        
        // Traverse all the node and go to the last node of the linked list 
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        
        // Simply points the temp->next to the newNode
        temp->next = newNode;
        
        return head;
    }
};

