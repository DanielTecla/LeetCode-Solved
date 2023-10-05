class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        anam = {}
        for i in s:
            if i in anam:
                anam[i] += 1 #key value exist
            else:
                anam[i] = 1 #key values doesn't exist
        for j in t:
            if j in anam:
                anam[j] -= 1 #key value exist
            else:
                return False
        
        for k in anam:
            if anam[k] != 0:
                return False
        return True

        