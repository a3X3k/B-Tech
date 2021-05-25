class Node:

    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right


def isop(op):
    return op == '+' or op == '-' or op == '*' or op == '/'


def inorder(head):

    if head is None:
        return

    if isop(head.data):
        print("(", end=' ')

    inorder(head.left)
    print(head.data, end=' ')
    inorder(head.right)

    if isop(head.data):
        print(")", end=' ')


def tree(exp_value):
    global node
    s = []

    for i in exp_value:
        if isop(i):
            x = s.pop()
            y = s.pop()
            node = Node(i, y, x)
            s.append(node)

        elif i == " ":
            continue

        else:
            s.append(Node(i))

    return node


if __name__ == '__main__':
    exp = input("Enter the Postfix Expression : ")
    root = tree(exp)
    print("Arithmatic Expression : ",end=" ")
    inorder(root)