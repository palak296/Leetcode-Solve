class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        struct ListNode* slow,*fast;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
};