int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *a = firstHead;
    Node *b = secondHead;
    while(a != b){
        if(a == NULL) a = secondHead;
        else a = a->next;
        
        if(b == NULL) b = firstHead;
        else b = b->next;
    }
    if(a == NULL) return -1;
    else return a->data;
}
