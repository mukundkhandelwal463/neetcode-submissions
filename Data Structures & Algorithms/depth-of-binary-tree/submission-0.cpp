class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Base case
        if (root == nullptr)
            return 0;

        // Find depth of left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        // Return maximum depth
        return 1 + max(leftDepth, rightDepth);
    }
};
