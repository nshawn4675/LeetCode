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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool node_res = check(root, subRoot);
        bool l_res = false, r_res = false;
        if (root->left) l_res = isSubtree(root->left, subRoot);
        if (root->right) r_res = isSubtree(root->right, subRoot);
        return node_res || l_res || r_res;
    }
private:
    bool check(TreeNode *t1, TreeNode *t2) {
        if (t1 == nullptr && t2 == nullptr) return true;
        if (t1 == nullptr || t2 == nullptr) return false;
        if (t1->val != t2->val) return false;
        return check(t1->left, t2->left) && check(t1->right, t2->right);
    }
};