class Solution {
public:
    ListNode* findMiddleNode(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next; // head->next because we want slow to point to the first element/middle in the even length case

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // merge linked list function
    ListNode* merge(ListNode* list1Head, ListNode* list2Head) {
        ListNode* dummyNode = new ListNode(-1); // can be any value
        ListNode* temp = dummyNode;

        while (list1Head != NULL && list2Head != NULL) {
            if (list1Head->val <= list2Head->val) {
                temp->next = list1Head;
                temp = list1Head;
                list1Head = list1Head->next;
            } else {
                temp->next = list2Head;
                temp = list2Head;
                list2Head = list2Head->next;
            }
        }

        // if list1 still has elements left
        while (list1Head != NULL) {
            temp->next = list1Head;
            temp = list1Head;
            list1Head = list1Head->next;
        }

        // if list2 still has elements left
        while (list2Head != NULL) {
            temp->next = list2Head;
            temp = list2Head;
            list2Head = list2Head->next;
        }
        return dummyNode->next;
    }

    // MergeSort recursive
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* mid = findMiddleNode(head);
        ListNode* leftHead = head;
        ListNode* rightHead = mid->next;
        mid->next = NULL; // Disconnect the left and right halves

        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);
        return merge(leftHead, rightHead);
    }
};
