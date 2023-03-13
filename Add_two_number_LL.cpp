class Solution
{
    private:
    Node* reverse(Node* head){
      
      Node* current = head;
      Node* previous = NULL;
      Node* forward = NULL;
      
      while (current != NULL){
          forward = current -> next;
          current -> next = previous;
          previous = current;
          current = forward ;
        } 
        return previous;  
    }
    
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int value){
        Node* temp = new Node(value);
        
        if (head == NULL){
            head = temp;
            tail = temp;
        }
        else {
            tail -> next = temp;
            tail = temp;
        }
       
    }
    
    struct Node* add(struct Node* first, struct Node* second){
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0 ){
            int val1 = 0;
            if (first != NULL){
                val1 = first -> data;
            }
            int val2 = 0;
            if (second != NULL){
                val2 = second -> data;
            }
            int sum = carry +val1 + val2;
            int digit = sum %10;
            
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum /10;
            if(first != NULL){
                first = first -> next ;    
            }
            if (second != NULL){
                second = second -> next ;
            }
            
        }
        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        // code here
        // step 1 - reverse of the linked list 
        first = reverse(first);
        second = reverse(second);
        
        // step 2- add the two linked list 
        
        Node* ans = add(first, second);
        
        // step 3- reverse the ans linked list 
        ans = reverse(ans);
        return ans;
    }
};
