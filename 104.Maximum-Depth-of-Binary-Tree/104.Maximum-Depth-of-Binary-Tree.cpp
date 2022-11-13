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
    int maxDepth(TreeNode* root) {
        max_d = 0;
        dfs(root, 0);
        return max_d;
    }
private:
    int max_d;
    void dfs(TreeNode* node, int d) {
        if (node == nullptr) {
            max_d = max(max_d, d);
            return;
        }
        dfs(node->left, d+1);
        dfs(node->right, d+1);
    }
};