/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
   Node *tempB;  
   while(headA!=NULL){  
     tempB = headB;  
     while(tempB!=NULL){  
       if(tempB == headA){  
         return tempB->data;  
       }  
       tempB = tempB->next;  
     }  
     headA = headA->next;  
   }  
   return headA->data; 
    // Complete this function
    // Do not write the main method. 
}
