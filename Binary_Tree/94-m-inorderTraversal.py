# Definition for a binary tree node.
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        res,temp=[],[]
        while 1:
            while root:
                temp.append(root)
                root=root.left
            if not temp:return res
            root=temp.pop()
            res.append(root.val)
            root=root.right