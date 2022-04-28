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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p=head;
      if(head==NULL or head->next==NULL or k==0) return head;
      int c=1;
      while(p->next)
      {
        p=p->next;
        c++;
      }
      cout<<c;
      k=c-(k%c);
      cout<<k;
      p->next=head;
      while(k--)
      {
        p=p->next;
      }
      cout<<p->val;
      head=p->next;
      p->next=NULL;
      return head;
        
    }
};