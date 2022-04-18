

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* d=dummy;
      while(l1 and l2)
      {
        if(l1->val<l2->val)
        {d->next=l1;
         l1=l1->next;
        }
        else {d->next=l2; l2=l2->next; }
        d=d->next;
      }
      d->next=l1?l1:l2;
      return dummy->next;
    }
};