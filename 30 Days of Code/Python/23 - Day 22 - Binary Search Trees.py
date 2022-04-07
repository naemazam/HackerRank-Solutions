# ========================
#       Information
# ========================

# Direct Link: https://www.hackerrank.com/challenges/30-binary-search-trees/problem
# Difficulty: Easy
# Max Score: 30
# Language: Python

'''
Explanation

There are 4 nodes in this path that are connected by 3 edges, meaning our BST’s height = 3. Thus, we print 3 as our answer.
'''

# ========================
#         Solution
# ========================

class Node:
    def __init__(self, data):
        self.right = self.left = None
        self.data = data
class Solution:
    def insert(self, root, data):
        if root == None:
            return Node(data)
        else:
            if data <= root.data:
                cur = self.insert(root.left, data)
                root.left = cur
            else:
                cur = self.insert(root.right, data)
                root.right = cur
        return root

    def getHeight(self, root):
        # Write your code here
        if root != None:
            l_height = 0
            r_height = 0
            l_height = self.getHeight(root.left) + 1
            r_height = self.getHeight(root.right) + 1
            return max(l_height, r_height)
        else:
            return -1

T = int(input())
myTree = Solution()
root = None
for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
height = myTree.getHeight(root)
print(height)
