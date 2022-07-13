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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode();
        ListNode* start=dummy;
    ListNode* c=head;
        int n=0;
        while(c!=NULL)
        {
            c=c->next;
            n++;
        }
        int g=n/k;
        ListNode* temp=NULL, *temp2=head, *remaining;
        for(int i=0;i<g;i++)
        {
            temp=NULL;
            remaining=head;
            for(int i=0;i<k;i++)
            {
                temp2=head->next;
                head->next=temp;
                temp=head;
                head=temp2;
            }
            start->next=temp;
            remaining->next=head;
            start=remaining;
        }
        return dummy->next;
    }
    
};