/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int count=0;
    Node* temp= new Node;
    Node* temp2= new Node;
    temp=head;
    temp2=head;
    if(head!=NULL)
        {
        while(count<positionFromTail+1)
            {
            temp=temp->next;
            count++;
        }
    }
    while(temp!=NULL)
        {
        temp2=temp2->next;
        temp=temp->next;
    }
    return temp2->data;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
