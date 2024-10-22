# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        dqueue = deque()
        dqueue.append(root)

        sum_levels = []

        while dqueue:
            current_sum = 0
            for i in range(len(dqueue)):
                node = dqueue.popleft()
                current_sum += node.val

                if node.left is not None:
                    dqueue.append(node.left)
                if node.right is not None:
                    dqueue.append(node.right)
            
            sum_levels.append(current_sum)
        
        if k > len(sum_levels):
            return -1
        
        sum_levels.sort(reverse=True)

        return sum_levels[k - 1]

            