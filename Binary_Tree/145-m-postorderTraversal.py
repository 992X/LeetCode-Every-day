# Definition for a binary tree node.
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None

class Solution:
    def postorderTraversal(self, root: TreeNode):
        res, stack = [], []
        while stack or root:
            if root:
                res += root.val,
                stack += root.left, root.right,
            root = stack.pop()
        return res[::-1]
                
                
        