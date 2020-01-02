/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{ Node *ptr=NULL;
 Node *main=NULL;
 
 Node *ptr1=NULL;
 Node *ptr2=NULL;
 ptr1=headA;
 ptr2=headB;
 
 if(ptr1==NULL && ptr2!=NULL)
     {
     return ptr2;
 }
 if(ptr2==NULL && ptr1!=NULL)
     {
      return ptr1;
 }
 
 
 while(ptr1!=NULL && ptr2!=NULL)
     {
     if(ptr1->data > ptr2->data)
         {
         if(ptr==NULL)
             {
             ptr=ptr2;
             ptr2=ptr2->next;
             main=ptr;
         }
         else
             {
         ptr->next=ptr2;
         ptr=ptr2;
         ptr2=ptr2->next;
         }}
    else if(ptr2->data >= ptr1->data)
         {
         if(ptr==NULL)
             {
             ptr=ptr1;
             ptr1=ptr1->next;
             main=ptr;
         }
         else
             {
         ptr->next=ptr1;
         ptr=ptr1;
         ptr1=ptr1->next;
         }}
 }
 if(ptr1==NULL&& ptr2!=NULL)
     {
     ptr->next=ptr2;
     
 }
 else if(ptr2==NULL && ptr1!=NULL
        )
     {
     ptr->next=ptr1;
    
 }
 
 return main;
 
  // This is a "method-only" submission. 
  // You only need to complete this method 
}
