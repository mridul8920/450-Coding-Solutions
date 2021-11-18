Approach to follow:
- Use Level Order Traversal
- Check for the conditions of MAX_HEAP

code:

bool isHeap(struct Node* root) {
        // code here
        queue<Node*>q;
        q.push(root);
        bool ans = false;
        while(!q.empty()){
            Node* cur=q.front();
            q.pop();
            
            if(cur->left){
                if(ans or cur->left->data >= cur->data){
                    return false;
                }
                q.push(cur->left);
            }
            else{
            ans=true;
            }
            
            if(cur->right){
                if(ans or cur->right->data >= cur->data){
                    return false;
                }
                q.push(cur->right);
            }
            else{ ans = true;
            }
            
        }
        return ans;
    }
