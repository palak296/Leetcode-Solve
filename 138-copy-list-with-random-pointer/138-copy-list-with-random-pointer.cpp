/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        
        Node* t=head;
        while(t!=NULL)
        {
            Node* node=new Node(t->val);
                Node* t2=t->next;
            t->next=node;
            node->next=t2;
            t=node->next;
        }
        t=head;
        while(t!=NULL)
        {
            t->next->random=(t->random)?(t->random->next):NULL;
            t=t->next->next;
        }
        
        Node* d=head->next;
        Node* r=head->next;
        t=head;
        while(t!=NULL)
        {
            t->next=t->next->next;
            d->next=(d->next)?(d->next->next):NULL;
            t=t->next;
            d=d->next;
        }
        return r;
    }
};