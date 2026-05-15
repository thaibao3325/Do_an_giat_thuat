class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        // Nếu một nhánh rỗng, phải lấy nhánh còn lại
        if (!root->left) return 1 + minDepth(root->right);
        if (!root->right) return 1 + minDepth(root->left);

        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
