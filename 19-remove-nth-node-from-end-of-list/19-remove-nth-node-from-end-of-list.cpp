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
           if(head==NULL) return head;
        ListNode* temp=head;
        while(temp)
        {
            temp=temp->next;
            c++;
        }
        if(c==n) return head->next;
        temp=head;
        int a=c-n-1;
        while(a--)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};