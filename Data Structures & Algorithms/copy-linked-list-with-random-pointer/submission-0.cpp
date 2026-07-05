class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head==NULL)
            return NULL;

        unordered_map<Node*, Node*> mp;

        Node* curr=head;

        // Create copy nodes
        while(curr){
            mp[curr]=new Node(curr->val);
            curr=curr->next;
        }

        curr=head;

        // Connect next and random
        while(curr){

            mp[curr]->next=mp[curr->next];
            mp[curr]->random=mp[curr->random];

            curr=curr->next;
        }

        return mp[head];
    }
};