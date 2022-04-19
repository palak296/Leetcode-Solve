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
    ListNode* t2=head;
    ListNode* t=NULL;
    while(head!=NULL)
    {
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
      ListNode* p=head;
      slow=slow->next;
      while(slow!=NULL)
      {
        if(p->val!=slow->val) return false;
        p=p->next;
        slow=slow->next;
      }
      return true;
    }
};