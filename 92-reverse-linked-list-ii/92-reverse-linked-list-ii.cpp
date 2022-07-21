class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* kyo = head; 
        for(int i = 1; i < left; i++) kyo = kyo->next;
        
        ListNode* node = kyo;
        for(int i = 0; i < (right-left+1); i++){
            v.push_back(node->val);
            node = node->next;
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            kyo->val = v[i];
            kyo = kyo->next;
        }
    return head;      
    }
};