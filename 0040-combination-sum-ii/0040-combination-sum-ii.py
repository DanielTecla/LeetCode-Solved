class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        def combinations(start: int, numbers: List[int], sum: int):
            if sum == target:
                ans.append(numbers)
                return
            elif sum > target:
                return
            
            lastVal = -1

            for i in range (start, len(candidates)):
                if lastVal != candidates[i]:
                    lastVal = candidates[i]
                    combinations(i + 1, numbers + [candidates[i]], sum + candidates[i])

        ans = []
        candidates.sort()
        combinations(0, [], 0)
        return ans
            