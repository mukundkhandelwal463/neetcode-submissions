class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // If both nodes are NULL
        if (p == NULL && q == NULL)
            return true;

        // If one is NULL and the other isn't
        if (p == NULL || q == NULL)
            return false;

        // If values are different
        if (p->val != q->val)
            return false;

        // Compare left and right subtrees
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
