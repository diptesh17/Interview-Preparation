
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if ( head == NULL)
        return head;

        ListNode *p=NULL , *c = head , *n = head->next;

        while( c!= NULL)
        {
            c->next = p;
            p=c;
            c=n;

            if( n!=NULL)
            n=n->next;
        }
        return p;
    }
};
