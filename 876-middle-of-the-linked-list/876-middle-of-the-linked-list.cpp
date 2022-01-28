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
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
      int c=0;
      while(p!=NULL)
      {
        c++;
        p=p->next;
      }
      
      c=c/2;
      
      while(c--)
      {
        head=head->next;
      }
      return head;
    }
};