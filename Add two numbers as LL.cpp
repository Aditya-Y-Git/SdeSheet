Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node *dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;
    while(head1 != NULL || head2 != NULL || carry){
        int sum = 0;
        if(head1 != NULL){
            sum += head1->data;
            head1 = head1->next;
        }
        if(head2 != NULL){
            sum += head2->data;
            head2 = head2->next;
        }
        sum += carry;
        carry = sum/10;
        Node* head = new Node(sum%10);
        temp->next = head;
        temp = temp->next;
    }
    return dummy->next;
}
