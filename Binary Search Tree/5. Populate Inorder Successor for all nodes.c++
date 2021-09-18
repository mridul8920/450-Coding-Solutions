TC  → O(N)
SC  → O(H)

void point_to_next(Node* root,Node* &prev){
        if(!root) return ;
        point_to_next(root->left,prev);
        if(prev!=NULL){
        prev->next=root;
        }
        prev=root;
        point_to_next(root->right,prev);
    }
    void populateNext(Node *root)
    {
        Node* prev=NULL;
        point_to_next(root,prev);
        //code here
    }
