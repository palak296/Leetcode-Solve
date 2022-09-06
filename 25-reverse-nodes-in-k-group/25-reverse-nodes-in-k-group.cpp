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
        int n;
        ListNode* t=head;
        while(t!=NULL)
        {
            n++;
            t=t->next;
        }
        int g=n/k;
        for(int i=0;i<g;i++)
        {
            ListNode* temp2;
            ListNode* node=head;
            ListNode* temp=NULL;
            for(int i=0;i<k;i++)
            {
                temp2=head->next;
                head->next=temp;
                temp=head;
                head=temp2;
            }
            start->next=temp;
            node->next=head;
            start=node;
        }
        return dummy->next;
    }
};