class Node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


def Inorder(root):
    if root:
        Inorder(root.left)
        print(root.data, end=" ")
        Inorder(root.right)


def Postorder(root):
    if         Postorder(root.right)
        print(root.data, end=" ")


def Preorder(root):
    if root:
        print(root.data, end=" ")
        Preorder(root.left)
        Preorder(root.right)


if __name__ == '__main__':
    head = Node(10)
    nod1 = Node(8)
    nod2 = Node(9)

    head.left = nod1
    head.right = nod2

    nod3 = Node(6)
    nod4 = Node(7)

    nod1.left = nod3
    nod1.right = nod4root:
        Postorder(root.left)


    nod5 = Node(4)
    nod6 = Node(5)

    nod2.left = nod5
    nod2.right = nod6

    nod7 = Node(2)
    nod8 = Node(3)

    nod3.left = nod7
    nod3.right = nod8

    nod9 = Node(0)
    nod10 = Node(1)

    nod6.left = nod9
    nod6.right = nod10

    print("Post Order Traversal LRN : ", end=" ")
    Postorder(head)
    print("\nPre Order Traversal NLR : ", end=" ")
    Preorder(head)
    print("\nInorder Order Traversal LNR : ", end=" ")
    Inorder(head)
