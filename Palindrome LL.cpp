LinkedListNode<int>* reverse(LinkedListNode<int>* head){
        if(head==NULL)return NULL;
        LinkedListNode<int> *p=NULL,*c=head,*n=c->next;
        while(c!=NULL){
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)n=n->next;
            
        }
        return p;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL) return true;
    LinkedListNode<int> *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        LinkedListNode<int> *start=head, *mid=slow->next;
        while(mid!=NULL){
            if(start->data!=mid->data)return false;
            start=start->next;
            mid=mid->next;
            
        }
        slow->next=reverse(slow->next);
        return true;
}
