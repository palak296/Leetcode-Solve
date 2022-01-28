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
      ListNode *start=new ListNode;
      start->next=head;
       ListNode* f=start;
      ListNode* s=start;
     
    int a=n;
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
      return start->next;
    }
};