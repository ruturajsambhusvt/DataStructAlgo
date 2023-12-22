
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    def getMinimumDifference(self, root) -> int:
        
        sorted_list =  self.inorder(root)
        print(sorted_list)
        return 5
        
        
    
    
    def inorder(self,root):
        result=[]
        if root is not None:

            if(root.left==None and root.right==None):
                result.append(root.val)
            elif(root.left==None):
                result.append(root.val)
                result.append(self.inorder(root.right))
            elif(root.right==None):
                result.append(self.inorder(root.left))
                result.append(root.val)
        
        return result


if __name__ == "__main__":
    s = Solution()
    root = [4,2,6,1,3]
    print(s.getMinimumDifference(root))