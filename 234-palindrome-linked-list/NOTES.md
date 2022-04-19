ListNode *fast = head, *slow = head;
while (fast && fast->next) {
fast = fast->next->next;
slow = slow->next;
}
// reverse 2nd half
ListNode *prev = NULL;
while (slow) {
ListNode* temp = slow->next;
slow->next = prev;
prev = slow;
slow = temp;
}
// check for palindrome
while (prev) {
if (head->val != prev->val) return false;
head = head->next;
prev = prev->next;
}
return true;
}