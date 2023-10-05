class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        s = list(s)
        count = 0
        rtn = 0
        temp = []
        for i in s:

            if i not in temp:
                temp.append(i)
                count += 1
            else:
                temp = temp[temp.index(i)+1:]
                temp.append(i)
                count = len(temp)

            if count > rtn:
                rtn = count

        return rtn
