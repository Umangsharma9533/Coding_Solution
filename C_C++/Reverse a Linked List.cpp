/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node* current= new Node;
    Node* prev= new Node;
    Node* next= new Node;
    prev=NULL;
   current=head;
    while(current!=NULL)
        {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
  // Complete this method
}
