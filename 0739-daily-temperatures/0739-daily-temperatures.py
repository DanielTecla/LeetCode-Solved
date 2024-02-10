class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        if len(temperatures) == 1:
            return [0]
        stack = [] #pair: [index,temperature]
        res = [0]*len(temperatures)
        for i in range(len(temperatures) - 1, -1 , -1):
            while stack and temperatures[i] >= stack[-1][1]:
                stack.pop(-1)
            if stack:
                res[i] = stack[-1][0] - i
            stack.append([i,temperatures[i]])
        return res