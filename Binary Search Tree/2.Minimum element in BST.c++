Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(Height of the BST).

int minValue(Node* root) {
// Code here
if(root==NULL)
return -1;
if((root->left==NULL && root->right==NULL) || (root->left==NULL && root->right!=NULL))
return root->data;
if(root->left!=NULL){
while(root->left!=NULL)
root=root->left;
}
return root->data;
}
