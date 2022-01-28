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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* f=head;
      ListNode* s=head;
      int a=n;
      ListNode* c=head;
      int cnt=0;
      while(c!=NULL)
      {
        cnt++;
        c=c->next;
      }
      if(cnt==n)
      {
        head=head->next;
        return head;
      }
      while(a--)
      {
        f=f->next;
      }
      
      while(f->next!=NULL)
      {
        s=s->next;
        f=f->next;
      }
      s->next=s->next->next;
      return head;
    }
};