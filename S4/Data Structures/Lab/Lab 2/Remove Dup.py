class Node:
    def __init__(self,data):
        self.previous = None
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def print(self):
        temp = self.head
        while temp:
            print(temp.data,end=" ")
            temp = temp.next

    def dup(self):

        present_node = next_node = self.head
        while present_node is not None:
            while next_node.next is not None:
                if next_node.next.data == present_node.data:
                    next_node.next = next_node.next.next
                else:
                    next_node = next_node.next
            present_node = next_node = present_node.next

if __name__=='__main__':

    LL = LinkedList()
    nod0 = Node(0)
    LL.head = nod0

    nod1 = Node(1)
    nod0.next = nod1

    nod2 = Node(2)
    nod1.next = nod2

    nod3 = Node(3)
    nod2.next = nod3

    nod4= Node(4)
    nod3.next = nod4

    nod5 = Node(2)
    nod4.next = nod5

    nod6 = Node(6)
    nod5.next = nod6

    nod7 = Node(3)
    nod6.next = nod7

    nod8 = Node(1)
    nod7.next = nod8

    nod9 = Node(1)
    nod8.next = nod9

    nod10 = Node(3)
    nod9.next = nod10

    print("The LinkedList before Removing Duplicates : ",end=" ")
    LL.print()

    LL.dup()
    print("\n\nThe LinkedList After Removing Duplicates : ", end=" ")
    LL.print()