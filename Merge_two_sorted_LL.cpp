Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL) return second;
    if(second == NULL) return first;
    
    Node<int> *ans, *temp;
    if(first->data < second->data){
        ans = first;
        temp = first;
        first = first->next;
    }
    else{
        ans = second;
        temp = second;
        second = second->next;
    }
    
    while(first != NULL && second != NULL){
        if(first->data < second->data){
            temp->next = first;
            temp = first;
            first = first->next;        
        }
        else{
            temp->next = second;
            temp = second;
            second = second->next;
        }
    }
    if(first == NULL) temp->next = second;
    else temp->next = first;
    return ans;
}
