ListNode* deleteDuplicates(ListNode* head) {
if (head==NULL) return head;
ListNode* prev = head;
ListNode* curr = head->next;
while(curr!=NULL) {
if (curr->val != prev->val) {
prev->next = curr;
prev=curr;
}
curr=curr->next;
}
prev->next = NULL;
return head;
}