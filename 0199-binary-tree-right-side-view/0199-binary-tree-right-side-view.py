# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root == None:
            return []
        ans = []
        queue = []
        queue.append(root)

        while queue:
            ans.append(queue[-1].val)

            for i in range(len(queue)):
                root = queue.pop(0)
                if root.left is not None:
                    queue.append(root.left)
                if root.right is not None:
                    queue.append(root.right)
        
        return ans
                
            






        