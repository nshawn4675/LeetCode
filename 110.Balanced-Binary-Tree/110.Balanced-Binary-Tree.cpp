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
    bool isBalanced(TreeNode* root) {
        res = true;
        cal_depth(root);
        return res;
    }
private:
    bool res;
    int cal_depth(TreeNode* node) {
        if (node == nullptr) return 0;
        int l_h = cal_depth(node->left);
        int r_h = cal_depth(node->right);
        if (1 < abs(l_h-r_h)) res = false;
        return max(l_h, r_h) + 1;
    }
};