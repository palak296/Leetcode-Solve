class Solution {
public:
    ListNode *mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode*  dummy=new ListNode(0); 
        ListNode *result = dummy;
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                result->next = l1;
                result = result->next;
                l1 = l1->next;
            }
            else
            {
                result->next = l2;                
                result = result->next;
                l2 = l2->next;
            }            
        }
        if(l1)
            result->next = l1;
        else if(l2)
            result->next = l2;
        return dummy->next;
    }

    ListNode *mergeKLists(vector<ListNode *> &lists) 
    {
        if (lists.empty()) return NULL;
        int len = lists.size();
        while (len > 1) 
        {
            for (int i = 0; i < len / 2; ++i) 
            {
                lists[i] = mergeTwoLists(lists[i], lists[len - 1 - i]);
            }
            len = (len +1) / 2;
        }
        return lists.front();
    }
};