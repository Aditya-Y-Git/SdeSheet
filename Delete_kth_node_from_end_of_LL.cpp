class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {  
        
        // If there are no nodes the simply just return 
        if( !head ) return head;
        
        // If there is only single node the return NULL
        if(head->next == NULL && n == 1) return NULL;
        
        //We will calculate the length of linked list
        int len = 0 ;
        ListNode* curr = head;
        while( curr!=NULL ){
            len++;
            curr = curr->next;
        }
        
        //Make the cuur pointer to head
        curr = head;
        
        //If n=1 means we have delete the last node
        if(n == 1){
            
            //Increment the pointer till we reach the node before the target node
            for(int i=1; i<len-1; i++){
                curr = curr->next;
            }
            
            curr->next = curr->next->next;
            return head;
        }
        
        //If n=length it means we have to delete the first node 
        else if( n==len ){
            
            //We will simply point the head to its next node
            head = head->next;
            return head;
        }
        
        //If there is different condition than above  
        else{
            
        //We will increment our pointer till we reach the node before target node
            for(int i = 0; i<len-n-1; i++){
               curr = curr->next;     
            }
            
            //Change the connections
            curr->next  = curr->next->next;
            return head;
        } 
    }
};
