TC → O(H)     SC → O(H)

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(!root) return NULL;
   if(root->data==n1 or root->data==n2) 
   return root;
   //SEARCH IN THE LS AND RS
   Node* leftans=LCA(root->left,n1,n2);
   Node* rightans=LCA(root->right,n1,n2);
   
   if(leftans!=NULL and rightans!=NULL){
       return root;
   }
   
   if(leftans!=NULL){
       return leftans;
   }
   return rightans;
}
