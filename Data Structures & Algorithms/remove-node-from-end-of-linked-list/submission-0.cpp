class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = 0;
        ListNode* temp = head;

        // Count nodes
        while(temp) {
            len++;
            temp = temp->next;
        }

        // If head needs to be deleted
        if(len == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        int pos = len - n;

        temp = head;

        // Move to node before the one to delete
        for(int i = 1; i < pos; i++) {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;

        delete del;

        return head;
    }
};