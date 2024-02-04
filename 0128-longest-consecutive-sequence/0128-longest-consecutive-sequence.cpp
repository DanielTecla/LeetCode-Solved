class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        if(nums.size()==0) return 0;
        int count=1,longest_count=1,previous_smallest=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]-1)==previous_smallest)
            {
                previous_smallest=nums[i];
                count++;
            }
            else if((nums[i]!=previous_smallest))
            {
                previous_smallest=nums[i];
                count=1;
            }
            longest_count=max(longest_count,count);
        }
        return longest_count;
    }
};