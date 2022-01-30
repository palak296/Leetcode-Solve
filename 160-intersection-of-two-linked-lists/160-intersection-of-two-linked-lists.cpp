/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
      ListNode *cur1 = l1, *cur2 = l2;
    
        while(cur1 !=cur2)
        {
        
          if(cur1!=NULL)
          {
             cur1=cur1->next;
          }
          else cur1=l2;
          if(cur2!=NULL)
          {
             cur2=cur2->next;
          }
          else cur2=l1;
        }
      return cur1;
       
    }
};
