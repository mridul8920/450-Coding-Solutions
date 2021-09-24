Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

TO SOLVE THE PROBLEM YOU CAN FOLLOW THE FOLLOWING APPROACH:

Store the inorder traversal of BST in a array / vector .
Now, try to build a balanced BST using a recursive approach.
You can simply do that by substituting the middle element of the vector as the root node recursively for each node of BST.
This will automatically minimize the height also.

void inorder_bst(Node* root, vector<int>&v){
    if(!root) return;
    inorder_bst(root->left,v);
    v.push_back(root->data);
    inorder_bst(root->right,v);
}
Node* make_balanced(int start,int end,vector<int>v){
    if(start>end) return NULL;
    int mid=(start+end)/2;
    Node* root=new Node (v[mid]);
    root->left=make_balanced(start,mid-1,v);
    root->right=make_balanced(mid+1,end,v);
    return root;
}

Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int>v;
	inorder_bst(root,v);
	int h=v.size();
	return make_balanced(0,h-1,v);
}
