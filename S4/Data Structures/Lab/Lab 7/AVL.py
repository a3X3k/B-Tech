class Node(object):

    def __init__(self,data):
        self.data = data
        self.leftChild = None
        self.rightChild = None
        self.height = 0


class AVL(object):
    def __init__(self):
        self.root = None

    def calcHeight(self,node):
        if not node:
            return -1
        #print('\nHeight: ', node.height)
        return node.height


    def insert(self, data):
        self.root = self.insertNode(data, self.root)

    def insertNode(self, data, node):
        if not node:
            return Node(data)
        if data < node.data:
            node.leftChild = self.insertNode(data, node.leftChild)
        else:
            node.rightChild = self.insertNode(data, node.rightChild)

        node.height = max(self.calcHeight(node.leftChild), self.calcHeight(node.rightChild)) + 1

        #print('Node {} Inserted'.format(data))
        return self.settleViolation(data, node)



    def settleViolation(self, data, node):
        balance = self.calcBalance(node)

        if balance > 1 and data < node.leftChild.data:
            return self.rotateRight(node)

        if balance < -1 and data > node.rightChild.data:
            return self.rotateLeft(node)

        if balance > 1 and data > node.leftChild.data:
            node.leftChild = self.rotateLeft(node.leftChild)
            return self.rotateRight(node)

        if balance < -1 and data < node.rightChild.data:
            node.rightChild = self.rotateRight(node.rightChild)
            return self.rotateLeft(node)
        return node


    def calcBalance(self,node):
        if not node:
            return 0
        return self.calcHeight(node.leftChild) - self.calcHeight(node.rightChild)


    def rotateRight(self,node):
        print('Rotating to right on node ', node.data)
        tempLeftChild = node.leftChild
        t = tempLeftChild.rightChild

        tempLeftChild.rightChild = node
        node.leftChild = t

        node.height = max(self.calcHeight(node.leftChild), self.calcHeight(node.rightChild)) + 1
        tempLeftChild.height = max(self.calcHeight(tempLeftChild.leftChild), self.calcHeight(tempLeftChild.rightChild)) + 1
        return tempLeftChild

    def rotateLeft(self,node):
        print('Rotating to Left on node ', node.data)
        tempRightChild = node.rightChild
        t = tempRightChild.leftChild

        tempRightChild.leftChild = node
        node.rightChild = t

        node.height = max(self.calcHeight(node.leftChild), self.calcHeight(node.rightChild)) + 1
        tempRightChild.height = max(self.calcHeight(tempRightChild.leftChild), self.calcHeight(tempRightChild.rightChild)) + 1
        return tempRightChild


    def remove(self, data):
        if self.root:
            self.root = self.removeNode(data, self.root)

    def removeNode(self, data, node):
        if not node:
            return node
        if data < node.data:
            node.leftChild = self.removeNode(data,node.leftChild)
        if data > node.data:
            node.rightChild = self.removeNode(data, node.rightChild)
        else:
            if not node.leftChild and not node.rightChild:
                print('Removing a leaf node...')
                del node
                return None
            if not node.leftChild:
                print('\nRemoving right child...')
                tempNode = node.rightChild
                del node
                return tempNode
            if not node.rightChild:
                print('\nRemoving left child...')
                tempNode = node.leftChild
                return tempNode
            print('\nRemoving Node with two children...')
            tempNode = self.getPredecessor(node.leftChild)
            node.data = tempNode.data
            node.leftChild = self.removeNode(tempNode.data, node.leftChild)
        if not node:
            return node

        node.height = max(self.calcHeight(node.leftChild), self.calcHeight(node.rightChild)) + 1
        balance = self.calcBalance(node)


        if balance > 1 and self.calcBalance(node.leftChild) >= 0:
            return self.rotateRight(node)

        if balance < -1 and self.calcBalance(node.rightChild) <= 0:
            return self.rotateLeft(node)

        if balance > 1 and self.calcBalance(node.leftChild) < 0:
            node.leftChild = self.rotateLeft(node.leftChild)
            return self.rotateRight(node)

        if balance < -1 and self.calcBalance(node.rightChild) > 0:
            node.rightChild = self.rotateRight(node.rightChild)
            return self.rotateLeft(node)
        return node


    def getPredecessor(self, node):
        if node.rightChild:
            return self.getPredecessor(node.rightChild)
        return node


    def traverse(self):
        if self.root:
            print("Elements : ",end= " ")
            self.traverseInOrder(self.root)


    def traverseInOrder(self, node):
        if node.leftChild:
            self.traverseInOrder(node.leftChild)
        print(node.data,end = " ")
        if node.rightChild:
            self.traverseInOrder(node.rightChild)

    def search(self,data):
        if self.root:
            self.find(self.root,data)


    def find(self, node,data):
        if node.leftChild:
            if node.data == data:
                print("\nElement Found!")
                f=1
                return
            self.find(node.leftChild,data)

        if node.rightChild:
            if node.data == data:
                print("\nElement Found!")
                return
            self.find(node.rightChild,data)

        else:
            print("\nElement Not Found!")
            return



if __name__ == '__main__':

    avl = AVL()
    avl.insert(10)
    avl.insert(20)
    avl.insert(5)
    avl.insert(6)
    avl.insert(15)
    avl.traverse()

    avl.remove(20)
    avl.remove(15)
    avl.traverse()
    avl.search(6)
    #avl.search(7)
