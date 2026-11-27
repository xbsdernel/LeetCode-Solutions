class Solution {
public:
    bool isValidBST(TreeNode* root, long long min = LLONG_MIN, long long max = LLONG_MAX) {
        if (!root) {
            return true; // An empty tree is a valid BST
        }

        if (root->val <= min || root->val >= max) {
            return false; // The current node's value is not within the valid range
        }

        // Check the left subtree with updated max value and the right subtree with updated min value
        return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);
    }
};
