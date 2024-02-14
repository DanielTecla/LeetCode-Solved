class Solution:
    def sumSquareDigits(self, n: int) -> int:
        count = 0
        while n:
            value = n%10
            count += value * value
            n = n//10
        return count

    def isHappy(self, n: int) -> bool:
        mySet = set()
        while n != 1:
            n = self.sumSquareDigits(n)
            if n in mySet:
                return False
            mySet.add(n)
        return True

