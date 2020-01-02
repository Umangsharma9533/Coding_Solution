/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node * ptr=NULL;
    ptr=head;
    if(head==NULL)
        {
        return NULL;
    }
     if(head->next==NULL)
        {
        return head;
    }
     
    while(ptr->next!=NULL)
        {
        Node *ptr1=NULL;
        Node * ptr2=NULL;
       
        if(ptr->data==ptr->next->data)
            {
            ptr1=ptr->next;
            ptr2=ptr->next->next;
             delete(ptr1);
            ptr->next=ptr2;
           
        }
        else
            {
            ptr=ptr->next;
        }
    }
    return head;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
