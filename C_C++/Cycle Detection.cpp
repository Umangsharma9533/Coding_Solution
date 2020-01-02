/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
      Node *ptr=NULL;
    Node *ptr2=NULL;
    if(head==NULL)
        { return false;}
    else if(head->next==NULL)
        {
        return false;
    }
    else if(head->next->next==NULL)
        {
        return false;
    }
    else
        {
        ptr=head;
        ptr2=head->next->next;
        while(ptr2->next->next!=NULL)
            {
            ptr=ptr->next;
            ptr2=ptr2->next->next;
            if(ptr==ptr2)
                {
                return true;
            }
        }
      
    }
    return false;
    // Complete this function
    // Do not write the main method
}
