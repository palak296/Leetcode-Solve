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
      ListNode* ptr=head;
      while(ptr)
      {
        c++;
        ptr=ptr->next;
        
      }
      int a=c-n-1;
      if(c==n)
      {
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
      }
        
      ListNode* p=head;
      while(a--)
      {
        p=p->next;
      }
      p->next=p->next->next;
      return head;
    }
};