class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j = nums.size() - 1, i = 0, mid;
        while(i <= j){
            mid = (j + i) / 2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) j = mid - 1;
            else if(nums[mid] < target)i = mid + 1;
        }
        if(mid == 0 && nums[mid] > target) return 0;
        if(nums[mid] < target) return mid + 1;
        else if(nums[mid] > target && nums[mid - 1] < target) return mid;

        return mid - 1; 
    }
};