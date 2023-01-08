class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, curr, ans);
        return ans;
    }
private:
    void dfs(vector<int>& candidates, int target, int start, vector<int>& curr, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        
        for (int i = start; i < candidates.size(); i++) {
            if (target < candidates[i]) break;
            curr.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i, curr, ans);
            curr.pop_back();
        }
    }
};