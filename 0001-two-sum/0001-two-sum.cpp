class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashM;
        int n = nums.size(),resta;
        for(int i=0;i<n;i++){
            resta = target-nums[i];
            if(hashM.count(resta)>0)
                return {hashM[resta],i};
            else
                hashM[nums[i]]=i;
        }
        return {};
    }
};