#include<queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
    
{
    
        
        queue<node*>q;
        q.push(root);
        while(!q.empty())
            {
            node * curr=q.front();
            
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
                {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
                {
                q.push(curr->right);
            
            }
            q.pop();
           
           
        }
    
  
}
