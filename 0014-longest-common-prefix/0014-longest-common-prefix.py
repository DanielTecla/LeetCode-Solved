class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""
        strs = sorted(strs)
        init = strs[0]
        end = strs[-1]
        for i in range (min(len(init),len(end))):
            if init[i] != end[i]:
                return ans
            ans += init[i]
        
        return ans