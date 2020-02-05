# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def preorderTraversal(self, root: TreeNode):
        res, stack = [], []
        while root or stack:
            if root:
                res += root.val,
                stack += root.right, root.left,
            root = stack.pop()
        return res