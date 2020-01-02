          Node* removeDuplicates(Node *head)
          {
               Node *ptr2=NULL;
              Node * ptr=head;
              if(ptr==NULL)
                  {
                  return NULL ;
              }
              
              while(ptr->next!=NULL)
                  {
                  if(ptr->data==ptr->next->data)
                      {
                     ptr2=ptr->next->next;
                      delete(ptr->next);
                      ptr->next=ptr2;
              }
                  else
                      {
                      ptr=ptr->next;
                  }
              }
              return head;
            //Write your code here
          }