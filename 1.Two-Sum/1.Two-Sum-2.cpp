class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const int n = nums.size();
        unordered_map<int, int> visited;
        for (int i=0; i<n; i++) {
            if (visited.count(target-nums[i]) != 0) {
                return {visited[target-nums[i]], i};
            }
            visited[nums[i]] = i;
        }
        return {};
    }
};