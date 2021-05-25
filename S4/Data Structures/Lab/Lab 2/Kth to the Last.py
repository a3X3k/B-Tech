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

    def find(self):

        n = int(input("\n\nEnter the Kth Element to Find : "))

        count = 0
        temp = self.head
        while temp:
            count = count + 1
            temp = temp.next

        count = count - n
        temp = self.head
        while count>1:
            count = count - 1
            temp = temp.next

        print("\nThe {}th Element to the Last Element is {} ".format(n,temp.data))


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

    nod5 = Node(5)
    nod4.next = nod5

    nod6 = Node(6)
    nod5.next = nod6

    nod7 = Node(7)
    nod6.next = nod7

    nod8 = Node(8)
    nod7.next = nod8

    nod9 = Node(9)
    nod8.next = nod9

    nod10 = Node(10)
    nod9.next = nod10

    print("The LinkedList : ",end=" ")

    LL.print()

    LL.find()