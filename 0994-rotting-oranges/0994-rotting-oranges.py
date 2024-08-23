from collections import deque

class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:

        r, c = len(grid), len(grid[0])
        rotOranges = deque()
        oranges = 0
        time = 0

        for row in range(r):
            for column in range(c):
                if grid[row][column] == 1:
                    oranges += 1
                elif grid[row][column] == 2:
                    rotOranges.append((row,column))

        if oranges == 0:
            return 0

        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

        while rotOranges:
            for i in range(len(rotOranges)):
                row, col = rotOranges.popleft()
                for dr, dc in directions:
                    nr, nc = row + dr, col + dc
                    if 0 <= nr < r and 0 <= nc < c and grid[nr][nc] == 1:
                        rotOranges.append((nr,nc))
                        grid[nr][nc] = 2
                        oranges -= 1
            time += 1

        return time - 1 if oranges == 0 else -1

