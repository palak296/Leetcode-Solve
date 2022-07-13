ListNode* oddEvenList(ListNode* head) {
if(head==nullptr || head->next==nullptr) //IF HEAD POINTING TO NULL OR ONLY 1 NODE PRESENT
return head;
ListNode *odd = head, *even = head->next, *join= head->next; // INITIALIZE ODD AS HEAD AND EVEN AS HEAD'S NEXT NODE
while(even && even->next)
{
odd->next = odd->next->next;  // CREATE A NEW LL CONTAINING ONLY ODD NODES
even->next= even->next->next; // CREATE A NEW LL CONTAINING ONLY EVEN NODES
odd=odd->next;
even = even->next;
}
odd->next = join; // JOIN THE END OF ODD NODE TO THE FIRST EVEN NODE
return head;
}
};