class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not len(nums):
            return 0

        nums.sort()

        long_seq = 1
        temp = 1
        for i in range(1,len(nums)):
            if(nums[i] - nums[i-1] == 1):
                temp += 1
            elif(nums[i] != nums[i-1]):
                temp = 1            
            long_seq = max(long_seq,temp)
        
        return long_seq