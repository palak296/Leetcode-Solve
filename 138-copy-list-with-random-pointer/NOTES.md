temp->next=newnode;
temp=newnode->next;
}
temp=head;
// Link random pointers of the newly created nodes
// and iterate through the newly created list and
// use original node's random pointers
// 2nd Pass
while(temp!=NULL)
{
temp->next->random=(temp->random)?(temp->random->next):NULL;
temp=temp->next->next;
}
// Unweave the current linked list to get back the
// original linked list and the cloned one.
// A->B->C
Node* original=head;
// A'->B'->C'
Node* clone=head->next;
// Result is used for returning
Node* result=head->next;
// 3rd Pass
while(original!=NULL)
{
original->next=original->next->next;
clone->next= (clone->next)?(clone->next->next):NULL;
original=original->next;
clone=clone->next;
}
return result;