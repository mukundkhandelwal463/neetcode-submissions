class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                arr.push_back(list1->val);
                list1 = list1->next;
            } else {
                arr.push_back(list2->val);
                list2 = list2->next;
            }
        }

        while (list1) {
            arr.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2) {
            arr.push_back(list2->val);
            list2 = list2->next;
        }

        ListNode dummy(0);
        ListNode* temp = &dummy;

        for (int x : arr) {
            temp->next = new ListNode(x);
            temp = temp->next;
        }

        return dummy.next;
    }
};