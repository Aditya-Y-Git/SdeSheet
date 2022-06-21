Node *firstNode(Node *head)
{
	//    Write your code here.
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
        if(slow==fast) break;
    }
    if(fast==NULL || fast->next == NULL) return NULL;
    Node *ptr1= head, *ptr2=slow;
    while(ptr1!=ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr1;
}
