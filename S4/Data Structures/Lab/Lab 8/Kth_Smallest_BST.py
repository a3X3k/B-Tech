class Node(object):
    def __init__(self, x):
        self.data = x
        self.left = None
        self.right = None

def kth_smallest(node, k):
    stack = []
    while node or stack:
        while node:
            stack.append(node)
            node = node.left
        node = stack.pop()
        k -= 1
        if k == 0:
            break
        node = node.right
    return node.data


def display(root):
    if root:
        display(root.left)
        print(root.data,end= " ")
        display(root.right)

if __name__ == '__main__':

    head = Node(10)
    head.left = Node(7)
    head.right = Node(15)
    head.left.left = Node(6)
    head.left.right = Node(9)
    head.right.left = Node(14)
    head.right.right = Node(14)

    print("\nInorder Traversal :",end= " ")
    display(head)
    print()

    n = int(input("\nEnter K to find the K'th Smallest : "))
    print("\n\t\t - {} Smallest Element is {}".format(n,kth_smallest(head, n)))
    n = int(input("\nEnter K to find the K'th Smallest : "))
    print("\n\t\t - {} Smallest Element is {}".format(n, kth_smallest(head, n)))
    
    head = Node(27)
    head.left = Node(14)
    head.right = Node(35)
    head.left.left = Node(10)
    head.left.right = Node(19)
    head.right.left = Node(31)
    head.right.right = Node(42)

    print("\nInorder Traversal :",end= " ")
    display(head)
    print()

    n = int(input("\nEnter K to find the K'th Smallest : "))
    print("\n\t\t - {} Smallest Element is {}".format(n,kth_smallest(head, n)))
    n = int(input("\nEnter K to find the K'th Smallest : "))
    print("\n\t\t - {} Smallest Element is {}".format(n, kth_smallest(head, n)))