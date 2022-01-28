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
        ListNode* ptr=head;
      int c=0;
      while(ptr)
      {
        c++;
        ptr=ptr->next;
      }
      cout<<c<<" ";
      ListNode* m=head;
      int a=c-n-1;
     if(c==n)
     {
       head=head->next;
       return head;
     }
      while(a--)
      {
        
        m=m->next;
        
      }
    
    m->next=m->next->next;
     
      
    
      return head;
    }
};