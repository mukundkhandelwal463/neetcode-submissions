class Solution {
public:
    void reorderList(ListNode* head) {
        // Base case: 0 or 1 nodes don't need reordering
        if (!head || !head->next) return;
        
        // 1. Store actual node pointers in a vector
        vector<ListNode*> vec;
        ListNode* temp = head;
        
        while (temp) {
            vec.push_back(temp);
            temp = temp->next;
        }
        
        // 2. Use two pointers (front and back) to weave the list
        int left = 0;
        int right = vec.size() - 1;
        
        while (left < right) {
            // Point the left node to the right node
            vec[left]->next = vec[right];
            left++;
            
            // If the pointers meet in the middle, stop early
            if (left == right) {
                break;
            }
            
            // Point the right node to the next left node
            vec[right]->next = vec[left];
            right--;
        }
        
        // 3. Prevent a cycle by making the final node point to null
        vec[left]->next = nullptr;
    }
};