/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
 Node* Insert(struct Node *head,int data)
{
      Node *cur= new Node;  
   cur->data = data;  
   cur->next = NULL;  
   if(head==NULL){  
     head = cur;  
   }else{  
     Node *curr = new Node;  
     curr = head;  
     while(curr->next !=NULL){  
       curr = curr->next;  
     }  
     curr->next = cur;  
   }  
     return head;  
  // Complete this method
}
