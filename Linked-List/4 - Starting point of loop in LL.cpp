class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        unordered_map <ListNode*,int> m;
        while(temp!=NULL)
        {
            if(m.find(temp)!=m.end())
            {
                return temp;
            }
            m[temp]++;
            temp = temp->next;
        }

        return NULL;
    }
};
