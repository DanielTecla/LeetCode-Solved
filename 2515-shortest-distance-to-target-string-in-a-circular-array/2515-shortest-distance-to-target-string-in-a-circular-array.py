class Solution:
    def closetTarget(self, words: List[str], target: str, startIndex: int) -> int:
        n = len(words)
        moves = 0
        while(moves * 2 <= n):
            if(words[(moves + startIndex)%n] == target or words[(startIndex - moves + n)%n] == target):
                return moves
            moves += 1
        return -1