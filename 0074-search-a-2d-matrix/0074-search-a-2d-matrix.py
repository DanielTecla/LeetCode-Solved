class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        top = 0
        bottom = len(matrix) - 1
        mid = -1
        while(top <= bottom):
            mid = top + (bottom - top)//2
            if matrix[mid][0] == target:
                return True
            elif matrix[mid][0] < target:
                top = mid + 1
            else:
                bottom = mid - 1
        
        if target < matrix[mid][0] and mid >= 1:
            mid -= 1
        elif target < matrix[mid][0] and mid == 0:
            return False
        
        top = 0
        bottom = len(matrix[mid]) - 1
        while(top <= bottom):
            smid = top + (bottom - top)//2
            if matrix[mid][smid] == target:
                return True
            elif matrix[mid][smid] < target:
                top = smid + 1
            else:
                bottom = smid - 1
        
        return False


        
        