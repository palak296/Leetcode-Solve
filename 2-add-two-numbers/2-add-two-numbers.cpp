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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
     ListNode *nxt = NULL, *prev = NULL;
    int i = 0;
    while (l1 || l2) {
        int v1 = l1? l1->val: 0;
        int v2 = l2? l2->val: 0;
        int tmp = v1 + v2 + i;
        i = tmp / 10;
        int val = tmp % 10;
        ListNode* cur = new ListNode(val);
        if (!nxt) nxt = cur;
        if (prev) prev->next = cur;
        prev = cur;
        l1 = l1? l1->next: NULL;
        l2 = l2? l2->next: NULL;
    }
    if (i > 0) {
        ListNode* l = new ListNode(i);
        prev->next = l;
    }
      return nxt;
        
    }
};