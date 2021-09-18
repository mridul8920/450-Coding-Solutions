TC → O(H)
SC → O(H)

Node* inpre(Node* root){
    Node* temp=root->left;
    while(temp->right)
     temp=temp->right;
    return temp;
}
Node* insuc(Node* root){
    Node* temp=root->right;
    while(temp->left)
    temp=temp->left;
    return temp;

}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
  if(!root) return;
  if(root->key==key){
    if(root->left)
    pre=inpre(root);
    if(root->right)
    suc=insuc(root);
    return;
  }
  if(key<root->key){
    suc=root;
    findPreSuc(root->left,pre,suc,key);
  }

 else if(key>root->key){
        pre=root;
    findPreSuc(root->right,pre,suc,key);
  }
}
