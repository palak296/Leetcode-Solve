
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
    ListNode* swapPairs(ListNode* head) {
     ListNode* dummy=new ListNode();
      ListNode* p=dummy;
      ListNode* c=head;
      if(head==NULL or head->next==NULL) return head;
      while(c and c->next)
      {
        p->next=c->next;
        c->next=c->next->next;
        p->next->next=c;
        c=c->next;
        p=p->next->next;
       
        
        
      }
      return dummy->next;
    }
};