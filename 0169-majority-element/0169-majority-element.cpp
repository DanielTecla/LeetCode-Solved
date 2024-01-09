class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        return dfs(nums, 0, n - 1);
    }

    int dfs(vector<int>& nums, int i, int j) {
        if (i == j)
            return nums[i];
        int mid = (i + j) / 2;
        int left = dfs(nums, i, mid);
        int rigth = dfs(nums, mid + 1, j);
        if (rigth == left)
            return left;

        return count_majority(nums, i, mid, left) >
                       count_majority(nums, mid + 1, j, rigth)
                   ? left
                   : rigth;
    }

    int count_majority(vector<int>& nums, int i, int j, int target) {
        int count;
        for (int k = i; k <= j; k++) {
            if (nums[k] == target)
                count++;
        }
        return count;
    }
};