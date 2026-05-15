class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        
        // Check if it's a leaf node
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        
        // Recurse on left and right children
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
