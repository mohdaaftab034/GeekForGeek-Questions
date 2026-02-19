// GFG Link - https://www.geeksforgeeks.org/problems/print-linked-list-elements/1?utm=codolio


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
    vector<int> printList(Node *head) {
        vector<int> arr;
        
        while(head) {
            arr.push_back(head->data);
            
            head = head->next;
        }
        
        return arr;
    }
};
