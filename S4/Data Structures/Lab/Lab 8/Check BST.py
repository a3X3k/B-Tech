class TreeNode(object):
    def __init__(self, x):
        self.data = x
        self.left = None
        self.right = None


def check(root):
    s = []
    prev = None

    while root or s:
        while root:
            s.append(root)
            root = root.left
        root = s.pop()
        if prev and  prev.data > root.data:
            return False
        prev = root
        root = root.right
    return True


if __name__=='__main__':

    head = TreeNode(27)
    head.left = TreeNode(14)
    head.right = TreeNode(35)
    head.left.left = TreeNode(10)
    head.left.right = TreeNode(19)
    head.right.left = TreeNode(31)
    head.right.right = TreeNode(42)

    if check(head):
        print("It's a BST!")
    else:
        print("It's not a BST!")

    head = TreeNode(10)
    head.left = TreeNode(7)
    head.right = TreeNode(15)
    head.left.left = TreeNode(6)
    head.left.right = TreeNode(9)
    head.right.left = TreeNode(14)
    head.right.right = TreeNode(14)

    if check(head):
        print("It's a BST!")
    else:
        print("It's not a BST!")

