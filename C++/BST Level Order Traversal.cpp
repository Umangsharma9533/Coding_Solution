	void levelOrder(Node * root){
      
            queue<Node *>q;
            q.push(root);
            while(!q.empty())
                {
               Node *curr=q.front();
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