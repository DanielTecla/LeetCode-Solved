class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        
        x_ = x
        reverse_x = 0
        while x_ != 0:
            temporal = x_ % 10
            x_ = x_//10
            reverse_x = (reverse_x) * 10 + temporal

        print(f"{reverse_x}")
        if x != reverse_x:
            return False
        return True