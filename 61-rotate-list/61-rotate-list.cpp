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
        auto p=head;
      if(!head or !head->next or k==0) return head;
      int len=1;
      while(p->next) {p=p->next; len++;}
      k=len-(k%len);
      p->next=head;
      while(k--)
      {
        p=p->next;
      }
      head=p->next;
      p->next=NULL;
      return head;
    }
};