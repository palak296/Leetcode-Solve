class Solution {
public:
    // function that divides linked list into half parts, and after sorting use to merge them
    void mergesorting(ListNode** head) 
    {
        ListNode* curr = *head; 
        ListNode* first;
        ListNode* second;
        if(curr == NULL || curr -> next == NULL)
            return;
        
        findmid(curr, &first,&second);
        
        mergesorting(&first); 
        
        mergesorting(&second);
        
        *head = merge(first,second);
    }
    
    void findmid(ListNode* curr, ListNode** first, ListNode** second)
    {
        ListNode* slow = curr; 
        ListNode* fast = curr -> next;
        
        while(fast != NULL)
        {
            fast = fast -> next;
            if(fast != NULL)
            {
                fast = fast -> next;
                slow = slow -> next;
            }
        }
        
        *first = curr;
        *second = slow -> next; 
        slow -> next = NULL; 
    }
    
    ListNode* merge(ListNode* first, ListNode* second)
    {
        ListNode* answer = NULL; 
        
        if(first == NULL) // if first is null, then what to merge...nothing
        {
            return second; // return second
        }
        
        if(second == NULL) // if second is null, then what to merge...nothing
        {
            return first; // return first
        }
        
        // if value of first is less than value of second,then give answer to first
        if(first -> val <= second -> val) 
        {
            answer = first;
            answer -> next = merge(first -> next, second); // and again call merge for answer's next
        }
        else // else give answer to second
        {
            answer = second;
            answer -> next = merge(first, second -> next); // and again call merge for answer's next
        }
        
        return answer; // finally return answer
    }
    ListNode* sortList(ListNode* head) {
        // paasing pointer as reference, so that changes are reflected
        mergesorting(&head); 
        
        return head;
    }
};