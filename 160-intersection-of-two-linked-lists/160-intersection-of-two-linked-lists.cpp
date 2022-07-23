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
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        ListNode* t1=a, *t2=b;
        while(t1!=t2)
        {
            if(t1==NULL) t1=b;
            else
            t1=t1->next;
            if(t2==NULL) t2=a;
            else
            t2=t2->next;
        }
        return t1;
    }
};