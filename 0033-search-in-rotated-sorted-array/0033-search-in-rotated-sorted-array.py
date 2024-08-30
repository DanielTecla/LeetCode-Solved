class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1
        
        while l <= r:
            mid = l + (r - l) // 2
            if nums[mid] == target:
                return mid
            elif target >= nums[l] and nums[l] > nums[mid]:
                r = mid - 1
            elif target <= nums[r] and nums[r] < nums[mid]:
                l = mid + 1
            elif target > nums[mid]:
                l =  mid + 1
            else:
                r = mid - 1
        
        return -1
