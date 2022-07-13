/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rev(ListNode* head)
    {
        ListNode* t=NULL, *t2=head;
        while(head!=NULL){
            t2=head->next;
            head->next=t;
            t=head;
            head=t2;
            
            
        }
        return t;
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    
        slow->next=rev(slow->next);
        slow=slow->next;
        while(slow!=NULL)
            
        {
            if(head->val==slow->val)
            { head=head->next; slow=slow->next;}
           else return false;
        }
return true;
    }
};