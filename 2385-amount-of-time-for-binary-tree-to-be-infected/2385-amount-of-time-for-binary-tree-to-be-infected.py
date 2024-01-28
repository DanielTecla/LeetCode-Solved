# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.maxDist = 0
    
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        self.dfs(root,start)
        return self.maxDist

    def dfs(self, root: Optional[TreeNode], target: int) -> int:
        depth = 0
        if root is None:
            return depth
        
        leftDepth = self.dfs(root.left, target)
        rightDepth = self.dfs(root.right, target) 

        if root.val == target:
            self.maxDist = max(leftDepth,rightDepth)
            depth = -1
        elif (leftDepth >= 0) and (rightDepth >= 0):
            depth = max(leftDepth,rightDepth) + 1
        else:
            depth = abs(leftDepth) + abs(rightDepth)
            self.maxDist = max(self.maxDist, depth)
            depth = min(leftDepth, rightDepth) - 1
        
        return depth


