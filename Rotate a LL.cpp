Node *rotate(Node *head, int k) {
     // Write your code here
    if(!head || !head->next || k==0) return head;
    
    Node* temp = head;
    int len = 1;
    while(temp->next != NULL){
        len++;
        temp = temp->next;
    }
    temp->next = head;
    k=k%len;
    k = len-k;
    while(k--){
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}
