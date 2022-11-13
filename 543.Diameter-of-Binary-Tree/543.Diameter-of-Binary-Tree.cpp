/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        res = 0;
        longest_path(root);
        return res - 1;
    }
private:
    int res;
    int longest_path(TreeNode* node) {
        if (node == nullptr) return 0;
        int l = longest_path(node->left);
        int r = longest_path(node->right);
        res = max(res, l+1+r);
        return max(l, r)+1;
    }
};