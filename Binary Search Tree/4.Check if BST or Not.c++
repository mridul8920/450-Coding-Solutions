Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

bool check_if_BST(Node* root,int minv,int maxv){
              if(root==NULL)
        return true;
        if(root->data>minv && root->data<maxv && check_if_BST(root->left,minv,root->data) && check_if_BST(root->right,root->data,maxv))
        return true;
        return false;
    }
    bool isBST(Node* root) 
    {
        // Your code here
     return check_if_BST(root,INT_MIN,INT_MAX);
  
    }
