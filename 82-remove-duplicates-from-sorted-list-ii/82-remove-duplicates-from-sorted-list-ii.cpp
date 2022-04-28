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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
      dummy->next=head;
      ListNode* p=dummy;
      int c;
      while(p->next and p->next->next)
      {
        if(p->next->val==p->next->next->val)
        {
          c=p->next->next->val;
          while(p->next and p->next->val==c)
          {
            p->next=p->next->next;
          }
          
        }
        else p=p->next;
      }
      return dummy->next;
    }
};