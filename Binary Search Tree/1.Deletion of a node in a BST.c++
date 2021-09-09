**Mainly focus on three cases:

when child nodes =0 (delete the node directly and return NULL)
when child nodes =1 (firstly find the Potential Replacement and then delete the node)
when child nodes =2 (Replace the data with either the immediate predecessor 
or successor of the Noe and then replace the data with root Node and then delete the node)
 (Incase of my code i replaced the root with the immediate successor)** 


TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        if(key<root->val){
            root->left=deleteNode(root->left,key);
            return root;
        }
        else if(root->val==key){
            
            //if children == 0
            
        if(root->left==NULL and root->right==NULL){
            delete(root);
            return NULL;
        }
            
            //if children == 1
            
        if(root->left!=NULL and root->right ==NULL){
            TreeNode* temp=root->left;
            delete(root);
            return temp;
        }
        if(root->left==NULL and root->right !=NULL){
            TreeNode* temp=root->right;
            delete(root);
            return temp;
        }
        
        //if children==2
        TreeNode* replace=root->right;
            while(replace->left!=NULL)
                replace=replace->left;
            root->val=replace->val;
            root->right=deleteNode(root->right,replace->val);
            return root;
      }
        
        else{
            root->right=deleteNode(root->right,key);
            return root;
        }
    }
