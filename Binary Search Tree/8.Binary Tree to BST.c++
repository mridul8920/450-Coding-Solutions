Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).

TO SOLVE THE PROBLEM YOU CAN FOLLOW THE FOLLOWING APPROACH:

Use the property of the inorder traversal of BST
Take a vector/array store the inorder of the BT in it
Sort the vector/array
The sorted data is nothing but the inorder traversal of BST
Generate the BST from its inorder traversal by simply just replacing the values of the tree with the new values of inorder of BST

void inorder_of_tree(Node* root,vector<int>&v){
        if(!root) return;
        inorder_of_tree(root->left,v);
        v.push_back(root->data);
        inorder_of_tree(root->right,v);
    }
   void inorder_bst(Node* root,vector<int>v,int &i){
        if(!root) return;
        inorder_bst(root->left,v,i);
        root->data=v[i++];
        inorder_bst(root->right,v,i);
        // return root;
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        int i=0;
        inorder_of_tree(root,v);
        sort(v.begin(),v.end());
        inorder_bst(root,v,i);
        return root;
    }
