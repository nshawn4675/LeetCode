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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build_BST(nums, 0, nums.size()-1);
    }
private:
    TreeNode* build_BST(vector<int>& nums, int l, int r) {
        if (r < l) return nullptr;
        int mid = l + (r-l) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = build_BST(nums, l, mid-1);
        node->right = build_BST(nums, mid+1, r);
        return node;
    }
};