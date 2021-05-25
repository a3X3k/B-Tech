class Node:
    def __init__(self, data):
        self.previous = None
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def print(self):
        temp = self.head
        i = 0
        global ele_count
        while i < ele_count+7:
            i = i + 1
            print(temp.data, end=" ")
            temp = temp.next
        # print("\n")

    def delete_first(self):

        self.head = self.head.next
        # self.head.previous = None
        i = 1
        temp = self.head
        global ele_count
        ele_count = ele_count - 1
        while i < ele_count:
            i = i + 1
            temp = temp.next
        # print("\n")
        # print(temp.data)
        self.head.previous = temp
        temp.next = self.head

    def delete_last(self):

        temp = self.head
        global ele_count
        ele_count = ele_count - 1
        i = 0
        while i < ele_count:
            i = i + 1
            temp = temp.next

        temp.previous.next = self.head
        temp = None
        #print("\n")
        #print(temp.data)

    def delete_mid(self):

        n = int(input("\n\nEnter the element that you want to delete : "))

        temp = self.head

        while temp:
            if temp.data == n:
                break
            temp = temp.next

        # print(temp.previous.data)
        # print(temp.data)
        # print(temp.next.data)

        temp.previous.next = temp.next
        temp.next.previous = temp.previous
        temp = None
        global ele_count
        ele_count = ele_count - 1

        print("\n--> The LinkedList after deleting the Node with {} : ".format(n), end=" ")

    def search(self):

        n = int(input("\n\nEnter the element that you want to Search : "))
        temp = self.head

        i = 1
        while i < ele_count:
            i = i + 1
            if temp.data == n:
                print("\n--> The Element {} is found in the LinkedList.".format(n))
                break
            temp = temp.next

        if i == ele_count:
            print("\n--> The Element {} is not found in the LinkedList.".format(n))

    def insert_mid(self):

        # Insertion at Position

        x = int(input("Enter the Input to Insert : "))
        p = int(input("Enter the Position to Insert : "))

        nod = Node(x)
        count = 0
        temp = self.head
        while temp:
            count = count + 1
            if count == p:
                # print("\n{}\n".format(temp.data))
                temp.previous.next = nod
                nod.previous = temp.previous
                nod.next = temp
                temp.previous = nod
                # print(temp.next.previous.data)
                break
            temp = temp.next
        global ele_count
        ele_count = ele_count + 1

    def insert_first(self):
        # Insertion at Start

        x = int(input("Enter the Input to Insert at Start : "))
        nod = Node(x)
        self.head.previous = nod
        nod.next = self.head
        self.head = nod
        temp = self.head
        i = 0
        global ele_count
        while i < ele_count:
            i = i + 1
            temp = temp.next

        temp.next = self.head
        self.head.previous = temp

        ele_count = ele_count + 1

    def insert_last(self):
        # Insertion at Last

        x = int(input("Enter the Input to Insert at Last : "))
        nod = Node(x)
        temp = self.head
        global ele_count
        i = 1
        while i < ele_count:
            i = i + 1
            temp = temp.next

        # print(temp.data)
        temp.next = nod
        nod.previous = temp
        self.head.previous = nod
        nod.next = self.head
        ele_count = ele_count + 1


if __name__ == '__main__':
    # --------------------- Creation --------------------------- #

    LL = LinkedList()

    x = int(input("Enter the Input to Insert : "))
    LL.head = Node(x)

    global ele_count
    ele_count = 1
    # --------------------- Insertion --------------------------- #

    # Insertion at Start

    LL.insert_first()
    LL.insert_first()

    # LL.print()

    # Insertion at End

    LL.insert_last()
    LL.insert_last()

    # LL.print()

    # Insertion at Middle

    LL.insert_mid()
    # LL.print()
    LL.insert_mid()
    #LL.print()

    # print("\n")
    # print(ele_count)

    # --------------------- Traversal --------------------------- #

    print("\n--> The LinkedList is : ", end=" ")
    LL.print()

    # --------------------- Deletion --------------------------- #

    # Delete Node 1

    LL.delete_first()

    print("\n--> The LinkedList after deleting First Node : ", end=" ")
    LL.print()

    # Delete Last Node

    LL.delete_last()

    print("\n--> The LinkedList after deleting Last Node : ", end=" ")
    LL.print()

    # Delete InBetween Nodes

    LL.delete_mid()

    LL.print()

    # print("\n")
    # print(ele_count)
    # --------------------- Traversal & Searching --------------------------- #

    LL.search()
