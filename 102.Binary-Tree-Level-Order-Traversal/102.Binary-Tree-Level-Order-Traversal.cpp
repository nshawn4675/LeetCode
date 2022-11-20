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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        vector<vector<int>> res;
        vector<TreeNode*> level;
        level.push_back(root);
        while (!level.empty()) {
            vector<int> level_res;
            vector<TreeNode*> next_level;
            for (int i=0; i<level.size(); i++) {
                level_res.push_back(level[i]->val);
                if (level[i]->left) next_level.push_back(level[i]->left);
                if (level[i]->right) next_level.push_back(level[i]->right);
            }
            res.push_back(level_res);
            level = next_level;
        }
        return res;
    }
};