class Node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


def get_node(node, data, depth):
    if node is None:
        return 0

    if node.data == data:
        return depth

    node_pos = get_node(node.left, data, depth + 1)

    if node_pos != 0:
        return node_pos

    node_pos = get_node(node.right, data, depth + 1)
    return node_pos


if __name__ == '__main__':

    root = Node(1)
    nod1 = Node(2)
    nod2 = Node(3)

    root.left = nod1
    root.right = nod2

    nod3 = Node(4)
    nod4 = Node(5)

    nod1.left = nod3
    nod1.right = nod4

    nod5 = Node(6)
    nod6 = Node(7)

    nod2.left = nod5
    nod2.right = nod6

    ele = int(input("Enter the Element to Find : "))

    if get_node(root, ele, 1):
        print("Depth of", ele, "is", get_node(root, ele, 0))
    else:
        raise Exception("No such Node!")
