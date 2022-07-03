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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode* temp=head;
        ListNode* newhead=head;
        int c=1;
        while(temp->next)
        {
            temp=temp->next;
            c++;
        }
        temp->next=head;
        if(k%=c)
        {
            for(int i=0;i<c-k;i++) temp=temp->next;
        }
        newhead=temp->next;
        temp->next=NULL;
        return newhead;
       
    }
};