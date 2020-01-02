/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node* temp= new Node;
    temp=head;
    if(position==0)
        {
        head=temp->next;
        free(temp);
        return head;
    }
    for( int i=0;i<position-1 && temp!=NULL;i++)
        {
        temp=temp->next;
        if(temp==NULL|| temp->next==NULL)
            {
           
        }
    }
    Node* next= temp->next->next;
    free(temp->next);
temp->next=next;
    return head;
  // Complete this method
}
