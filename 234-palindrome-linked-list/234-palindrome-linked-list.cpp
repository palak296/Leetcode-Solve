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
    bool isPalindrome(ListNode* head) {
      string s;
      ListNode* ptr=head;
      while(ptr!=NULL){
        s+=to_string(ptr->val);
        ptr=ptr->next;
      }
      string rev = string(s.rbegin(),s.rend());
        return s==rev;
    }
};