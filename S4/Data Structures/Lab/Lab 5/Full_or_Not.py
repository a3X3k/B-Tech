class Node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


def full_or_not(head):
    if head is None:
        return True

    elif head.left is None and head.right is None:
        return True

    elif head.left is not None and head.right is not None:
        return full_or_not(head.left) and full_or_not(head.right)

    else:
        return False


if __name__ == '__main__':
    root = Node(1)
    nod1 = Node(2)
    nod2 = Node(3)

    root.left = nod1
    root.right = nod2

    nod3 = Node(4)
    nod4 = Node(5)

    nod2.left = nod3
    # nod2.right = nod4

    if full_or_not(root):
        print("It is a FULL Binary tree")
    else:
        print("It is not a FULL Binary tree")
