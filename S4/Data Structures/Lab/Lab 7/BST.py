class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None
        self.parent = None

    def insert(self, node):
        if self.key > node.key:
            if self.left is None:
                self.left = node
                node.parent = self
            else:
                self.left.insert(node)
        elif self.key < node.key:
            if self.right is None:
                self.right = node
                node.parent = self
            else:
                self.right.insert(node)

    def inorder(self):
        if self.left is not None:
            self.left.inorder()
        print(self.key, end=' ')
        if self.right is not None:
            self.right.inorder()

    def rep_parent(self, new_node):
        if self.parent is not None:
            if new_node is not None:
                new_node.parent = self.parent
            if self.parent.left == self:
                self.parent.left = new_node
            elif self.parent.right == self:
                self.parent.right = new_node
        else:
            self.key = new_node.key
            self.left = new_node.left
            self.right = new_node.right
            if new_node.left is not None:
                new_node.left.parent = self
            if new_node.right is not None:
                new_node.right.parent = self

    def find_min(self):
        current = self
        while current.left is not None:
            current = current.left
        return current

    def pop(self):
        if self.left is not None and self.right is not None:
            successor = self.right.find_min()
            self.key = successor.key
            successor.pop()
        elif self.left is not None:
            self.rep_parent(self.left)
        elif self.right is not None:
            self.rep_parent(self.right)
        else:
            self.rep_parent(None)

    def search(self, key):
        if self.key > key:
            if self.left is not None:
                return self.left.search(key)
            else:
                return None
        elif self.key < key:
            if self.right is not None:
                return self.right.search(key)
            else:
                return None
        return self

    def find(self, key):
        if self.key > key:
            if self.left is not None:
                return self.left.find(key)
            else:
                print("Element not Found!")
                return
        elif self.key < key:
            if self.right is not None:
                return self.right.find(key)
            else:
                print("Element not Found!")
                return
        print("Element Found!")


class Tree:
    def __init__(self):
        self.root = None

    def inorder(self):
        if self.root is not None:
            self.root.inorder()

    def push(self, key):
        new_node = Node(key)
        if self.root is None:
            self.root = new_node
        else:
            self.root.insert(new_node)

    def pop(self, key):
        to_pop = self.search(key)
        if self.root == to_pop and self.root.left is None and self.root.right is None:
            self.root = None
        else:
            if to_pop is None:
                print("No Node!")
            else:
                to_pop.pop()

    def search(self, key):
        if self.root is not None:
            return self.root.search(key)

    def find(self, key):
        if self.root is not None:
            return self.root.find(key)


Tree = Tree()

while (1):
    op = int(input("Enter the ( 1 to Add ) - ( 2 to Delete ) - ( 3 to Print Inorder ) - ( 4 to Search ) - ( 0 to Exit "
                   ") : "))

    if op == 1:
        ele = int(input("Enter the Element to Insert : "))
        Tree.push(ele)

    elif op == 2:
        ele = int(input("Enter the Element to Delete : "))
        Tree.pop(ele)

    elif op == 3:
        print("\nInorder Traversal : ", end=" ")
        Tree.inorder()
        print()

    elif op == 4:
        ele = int(input("Enter the Element to Search : "))
        Tree.find(ele)

    elif op == 0:
        break

    else:
        print("Wrong option!")
