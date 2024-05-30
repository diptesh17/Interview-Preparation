// Place fast pointer at n 
// Then move both pointer by one
// Simply helps to reduce the task of length calculaion

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        for(int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        if(fast == NULL) {
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
        ListNode* slow = head;
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* deletenode = slow->next;
        slow->next = slow->next->next;
        delete deletenode;
        
        return head;
    }
};
