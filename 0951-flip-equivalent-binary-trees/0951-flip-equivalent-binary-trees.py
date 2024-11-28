# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flipEquiv(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        
        if root1 is None or root2 is None:
            return root1 == root2

        if root1.val != root2.val:
            return False


        fStack = [root1]
        sStack = [root2]

        while fStack and sStack:
            nodeF = fStack.pop()
            nodeS = sStack.pop()

            nodePair = [nodeF.left, nodeF.right]
            
            noNodes = 0
            nodeHash = {}
            
            for child in [nodeS.left, nodeS.right]:
                if child is not None:
                    nodeHash[child.val] = child
                else:
                    noNodes += 1

            for node in nodePair:
                
                if node is not None:

                    if node.val in nodeHash:
                        fStack.append(node)
                        sStack.append(nodeHash[node.val])
                    else:
                        return False

                else:
                    if noNodes:
                        noNodes -= 1
                    else:
                        return False

        return True



            
