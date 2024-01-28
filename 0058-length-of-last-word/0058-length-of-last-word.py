class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        last_word = 0
        count = 0
        for l in s:
            if l == ' ':
                count = 0
            else: 
                count += 1
                last_word = count
        return last_word