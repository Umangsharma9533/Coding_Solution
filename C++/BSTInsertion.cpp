/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/
node * new1(int v)
    {
    node *t = new node;
    t->data=v;
    t->left=NULL;
    t->right=NULL;
    return t;
}

node * insert(node * root, int value)
{
    node * ptr=NULL;
    
if(root==NULL)
    {
    return new1(value);
}
    ptr=root;
    while(ptr->left!=NULL || ptr->right!=NULL)
        {
        if(value<=ptr->data)
            {
            ptr=ptr->left;
        }
        else
            {
            ptr=ptr->right;
        }
    }
    if(value<=ptr->data)
        {
        ptr->left=new1(value);
    }
    else
        {
        ptr->right=new1(value);
    }

   return root;
}
