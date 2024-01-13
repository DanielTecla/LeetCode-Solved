class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        b = 0
        e = len(nums)
        m = (e + b)//2
        while e > b:
            if nums[m] == target:
                return m
            elif nums[m] > target:
                e = m
            else:
                b = m + 1
            m = (e + b)//2
        return m

        