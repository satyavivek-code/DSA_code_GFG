/* Algorithm Approch (2) 

step 1- find the middle of the linked list 
step 2- Reverse the linked list after the middle element 
step 3- Now compare the both half of the linked list
step 4- finally repead the second step to get the original input linked list
*/ 

class Solution{
  private:
  Node* getMid(Node* head){
      Node* slow = head;
      Node* fast = head -> next;
      
      while(fast != NULL && fast->next != NULL){
          fast = fast -> next -> next;
          slow = slow -> next;
      }
      return slow;
  }
  
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
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if (head ->next == NULL){
            return true;
        }
        
        // step 1 = get the middle element 
        Node* middle = getMid (head);
        
        // step 2 = reverse the second half linked list
        
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        // step 3 = compare the both half of the linked list
        
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while (head2 != NULL){
            if (head1 -> data != head2 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        // step 4 = repeat teh second step to get the original list
        
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
};
