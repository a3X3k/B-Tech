class Node(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


def BST(arr):
    if not arr:
        return None
    root = len(arr) // 2
    node = Node(arr[root])
    node.left = BST(arr[:root])
    node.right = BST(arr[root + 1:])
    return node


def display(node):
    if not node:
        return
    print(node.val,end= " ")
    display(node.left)
    display(node.right)


if __name__=='__main__':

    arr=[]
    n = int(input("Enter number of elements : "))

    for i in range(0, n):
        ele = int(input())
        arr.append(ele)

    r = BST(arr)
    print("Pre Order Traversal :",end=" ")
    display(r)

