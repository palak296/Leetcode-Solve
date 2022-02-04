class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* left_node = head; 
        for(int i = 1; i < left; i++) left_node = left_node->next;
        
        ListNode* node = left_node;
        for(int i = 0; i < (right-left+1); i++){
            v.push_back(node->val);
            node = node->next;
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            left_node->val = v[i];
            left_node = left_node->next;
        }
    return head;      
    }
};