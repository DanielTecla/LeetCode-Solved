class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        
        row = [1] * n

        for _ in range(m - 1):
            currentRow = [1] * n
            for i in range(1,n):
                currentRow[i] = row[i] + currentRow[i - 1]
            row = currentRow
        
        return row[-1]
                

