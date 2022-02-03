class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        
        int len=1;
        ListNode *t, *t2;
        t=t2=head;
        
        while(t2->next) 
        {
            t2 = t2->next;
            len++;
        }
        t2->next = head; 

       if(k%=len)
        for(auto i=0; i<len-k; i++) 
          t2 = t2->next; 
    
        t = t2->next; 
        t2->next = NULL;
        return t;
    }
};