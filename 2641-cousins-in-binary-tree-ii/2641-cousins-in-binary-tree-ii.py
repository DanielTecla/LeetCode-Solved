# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def replaceValueInTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        
        dqueue = deque()
        dqueue.append([root])

        total = 0
        n_groups = 1

        while dqueue:
            new_total = 0
            new_groups = 0

            for i in range(len(dqueue)):
                group = dqueue.popleft()

                brother = 0
                
                for node in group:
                    sub_group = []
                    brother += node.val

                    if node.left is not None:
                        sub_group.append(node.left)
                        new_total += node.left.val
                    if node.right is not None:
                        sub_group.append(node.right)
                        new_total += node.right.val
                    
                    if sub_group:
                        dqueue.append(sub_group)
                        new_groups += 1


                for node in group:
                    if n_groups == 1:
                        node.val = 0
                    else:
                        node.val = total - brother
            
            total = new_total
            n_groups = new_groups
        
        return root







            
                



            


        