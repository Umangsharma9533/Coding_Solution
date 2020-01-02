Node* insert(Node *head,int data)
{
    Node *temp = head;
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;
    if(temp==NULL){
        head= newnode;
        return head;
    }
    else {
        while (temp->next!= NULL)
            temp = temp->next;
        temp->next=newnode;
        return head;
    }   
    //Complete this function
}