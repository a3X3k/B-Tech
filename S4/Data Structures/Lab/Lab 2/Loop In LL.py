class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.flag = 0

class LinkedList:
    def __init__(self):
        self.head = None

    def print(self):
        temp = self.head
        while temp:
            print(temp.data,end=" ")
            temp = temp.next

    def find(self):
        temp = self.head
        while temp:
            if temp.flag == 1:
                print("Loop Exists")
                return
            temp.flag = 1
            temp = temp.next
        print("Loop Does not Exists")

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

    nod10.next = LL.head

    #print("The LinkedList : ",end=" ")

    #LL.print()

    LL.find()





