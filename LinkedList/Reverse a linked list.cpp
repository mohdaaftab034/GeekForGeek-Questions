// GFG - https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm=codolio


// -----------------Solution - 1----------------------
class Solution {
  public:
  
    Node* reverse(Node* curr, Node* prev) {
        
        if(curr == NULL) {
            return prev;
        }
        
        Node* fut = curr-> next;
        curr-> next = prev;
        
        reverse(fut, curr);
    }
  
    Node* reverseList(Node* head) {
        
        return reverse(head, NULL);
    }
};



// ------------------Solution - 2---------------------
/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        
        if(head == NULL) {
            return head;
        }
        
        vector<int>arr;
        
        while(head != NULL) {
            
            arr.push_back(head-> data);
            head = head-> next;
            
        }
        
        reverse(arr.begin(), arr.end());
        
        Node* temp = new Node(arr[0]);
        Node* res = temp;
        
        for (int i = 1; i < arr.size(); i++) {
            
            temp -> next = new Node(arr[i]);
            temp = temp-> next;
            
        }
        
        return res;
    }
};
