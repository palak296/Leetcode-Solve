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
        int c=0;
      if(head==NULL) return head;
      ListNode* p=head;
      while(p)
      {
        c++; p=p->next;
      }
      if(c==n) return head->next;
      n=c-n-1;
      
      p=head;
      while(n--)
      {
        p=p->next;
      }
      p->next=p->next->next;
      return head;
    }
};