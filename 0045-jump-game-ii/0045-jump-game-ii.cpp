class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), INT_MAX);
        dp[0] = 0;
        for(int i = 0; i < dp.size() - 1; i++){
            for(int j = 1; j <= nums[i] && (i + j) < dp.size(); j++){
                dp[i + j] = min(dp[i] + 1,dp[i + j]);
            }
        }

        return dp[dp.size() - 1];
    }
};