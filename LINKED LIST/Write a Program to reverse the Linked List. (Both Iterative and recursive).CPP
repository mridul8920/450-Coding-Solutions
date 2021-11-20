 struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL){
            return head;
        }
        struct Node *rest;
        rest=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
        // code here
        // return head of reversed list
    }
