class Node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


def push(root, key):
    
    if root is None:
        return Node(key)

    if key < root.data:
        root.left = push(root.left, key)

    else:
        root.right = push(root.right, key)

    return root


def find_min(node):
    while node.left:
        node = node.left
    return node


def find(root, successor, key):
    if root is None:
        return None

    if root.data == key:
        if root.right:
            return find_min(root.right)

    elif key < root.data:

        successor = root
        return find(root.left, successor, key)

    else:
        return find(root.right, successor, key)

    return successor


if __name__ == '__main__':

    arr = []
    n = int(input("Enter number of elements : "))

    for i in range(0, n):
        ele = int(input("Enter the Element {} : ".format(i+1)))
        arr.append(ele)

    e = int(input("Enter the Node : "))
    head = None
    for i in arr:
        head = push(head, i)

    for i in arr:
        if find(head,None, i):
            if i == e:
                print("The Successor of Node", i, "is", find(head,None, i).data)
                break
        else:
            print("The Successor doesn't exist for Node", i)