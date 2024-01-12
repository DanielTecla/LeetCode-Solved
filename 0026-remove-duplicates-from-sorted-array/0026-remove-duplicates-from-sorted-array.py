class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if(len(nums) == 1):
            return 1

        cont = 1
        check = nums[0]
        new_nums = []
        new_nums.append(check)

        for number in nums:
            if number != check:
                cont += 1
                new_nums.append(number)
                check = number

        nums[:] = new_nums  # Update the input list in-place
        
        return cont        

        