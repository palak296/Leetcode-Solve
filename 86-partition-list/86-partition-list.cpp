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
    ListNode* partition(ListNode* head, int x) {
        ListNode* l1=new ListNode(0);
      ListNode *l2=new ListNode(0);
      ListNode* l1p=l1;
      ListNode* l2p=l2;
      while(head)
      {
        int v=head->val;
        if(v<x)
        {
          l1p->next=head;
          l1p=l1p->next;
        }
        else{
          l2p->next=head;
        l2p=l2p->next;}
         head=head->next;
      }
      l2p->next=NULL;
      l1p->next=l2->next;
      return l1->next;
     
    }
};