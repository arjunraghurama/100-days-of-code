# https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        res= []
        def depth_first_search(node):
            if not node:
                res.append("N")
                return
            res.append(str(node.val))
            depth_first_search(node.left)
            depth_first_search(node.right)
        
        depth_first_search(root)
        return ",".join(res)


        

    def deserialize(self, data):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        res = data.split(",")
        self.item = 0
        def util():
            if res[self.item] == "N":
                self.item+=1
                return None
            node = TreeNode(int(res[self.item]))
            self.item+=1
            node.left = util()
            node.right = util()
            return node
        return util()
        
