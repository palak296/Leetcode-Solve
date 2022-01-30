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
        ListNode* p1;
      ListNode*p2;
     for(p1=head;p1!=NULL;p1=p1->next)
      {
       for(p2=head->next;p2!=NULL;p2=p2->next){
          if(p1->val==p2->val)
          p1->next=p2->next;
        }
        
       
      }
      return head;
    }
};