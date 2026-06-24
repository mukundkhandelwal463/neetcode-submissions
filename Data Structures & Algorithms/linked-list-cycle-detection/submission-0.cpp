class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> st;

        while(head) {
            if(st.count(head))
                return true;

            st.insert(head);
            head = head->next;
        }

        return false;
    }
};