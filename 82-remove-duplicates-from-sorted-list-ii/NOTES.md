public ListNode deleteDuplicates(ListNode head) {
if (head == null || head.next == null) return head;
​
ListNode prev = null, p1 = head, p2 = head.next;
​
while (p2 != null) {
if (p1.val != p2.val) {
//If duplicate not found, move both the pointers and prev to one step
prev = p1;
p1 = p1.next;
p2 = p2.next;
} else {
//if duplicate found all the duplicates are removed jus like in Remove duplicates 1 problem of leetCode
while (p2.val == p1.val) {
p1.next = p2.next;
p2.next = null;
p2 = p1.next;
if (p2 == null) break;
}
​
//Now remove the first pointer that is starting node of duplicates
if (p1 == head) {
head = p2;
} else {
prev.next = p2;
p1.next = null;
}
p1 = p2;
if (p2 != null) p2 = p2.next;
}
​
}
return head;
}