class Solution {
private:
    int countSubsets(vector<int>& nums, int ind, int sum, vector<vector<int>>& dp) {
        if (ind == 0) {
            if (sum == 0 && nums[0] == 0) return 2;
            if (sum == 0 || sum == nums[0]) return 1;
            return 0;
        }

        if (dp[ind][sum] != -1) return dp[ind][sum];

        int notTake = countSubsets(nums, ind - 1, sum, dp);

        int take = 0;
        if (nums[ind] <= sum) {
            take = countSubsets(nums, ind - 1, sum - nums[ind], dp);
        }

        return dp[ind][sum] = take + notTake;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total = 0;
        for (int x : nums) total += x;

        if (total + target < 0) return 0;
        if ((total + target) % 2 != 0) return 0;

        int s1 = (total + target) / 2;

        vector<vector<int>> dp(nums.size(), vector<int>(s1 + 1, -1));

        return countSubsets(nums, nums.size() - 1, s1, dp);
    }
};