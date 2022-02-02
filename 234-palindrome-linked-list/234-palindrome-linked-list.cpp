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
  ListNode* reversel(ListNode* head2 ){
  
      ListNode* temp=NULL;
      ListNode* temp2=head2;
      while(head2)
      {
        temp2=head2->next;
        head2->next=temp;
        temp=head2;
        head2=temp2;
      }
    return temp;
  }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
      ListNode* fast=head;
      while(fast->next and fast->next->next)
      {
        slow=slow->next;
        fast=fast->next->next;
      }
      slow->next=reversel(slow->next);
      ListNode* ptr=head;
      slow=slow->next;
      while(slow!=NULL)
      {
        if(ptr->val!=slow->val) return false;
        ptr=ptr->next;
        slow=slow->next;
      }
      return true;
      
    }
};