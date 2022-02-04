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
       
      if(head==NULL or head->next==NULL) return head;
       ListNode* temp=head;
     
      ListNode* pre=NULL;
      ListNode* n=head->next;
      while(n)
      {
        if(temp->val!=n->val)
        {
        pre=temp;
        temp=temp->next;
        n=n->next;
        }
        else
          { 
          while(n->val==temp->val){
            temp->next=n->next;
         n->next=NULL;
          n=temp->next;
        if(n==NULL) break;
          }
          if(temp==head){
            head=n;
          }
          else{
            pre->next=n;
            temp->next=NULL;
          }
          temp=n;
          if(n!=NULL) n=n->next;
        }
        
      }
      return head;
    }
};