class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def print(self):
        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next

    def delete_first(self):

        temp = self.head
        self.head = self.head.next
        temp = None

    def delete_last(self):

        temp = self.head
        previous = None
        while temp.next:
            previous = temp
            temp = temp.next

        previous.next = None
        temp = None

    def delete_mid(self):

        n = int(input("\n\nEnter the element that you want to delete : "))

        temp = self.head
        previous = None

        while temp:
            if temp.data == n:
                break
            previous = temp
            temp = temp.next

        previous.next = temp.next
        temp = None

        print("\n--> The LinkedList after deleting the Node with {} : ".format(n), end=" ")

    def search(self):

        n = int(input("\n\nEnter the element that you want to Search : "))
        temp = self.head

        while temp:
            if temp.data == n:
                print("\n--> The Element {} is found in the LinkedList.".format(n))
                break
            temp = temp.next

        if temp is None:
            print("\n--> The Element {} is not found in the LinkedList.".format(n))

    def insert_mid(self):

        # Insertion at Position

        x = int(input("Enter the Input to Insert : "))
        p = int(input("Enter the Position to Insert : "))

        nod = Node(x)
        count = 1
        temp = self.head
        while temp:
            count = count + 1
            if count == p:
                # print(temp.data)
                nod.next = temp.next
                temp.next = nod
                break
            temp = temp.next

    def insert_first(self):
        # Insertion at Start

        x = int(input("Enter the Input to Insert at Start : "))
        nod = Node(x)
        temp = self.head
        nod.next = temp
        self.head = nod

    def insert_last(self):
        # Insertion at Last

        x = int(input("Enter the Input to Insert at Last : "))
        nod = Node(x)
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = nod


if __name__ == '__main__':
    # --------------------- Creation --------------------------- #

    LL = LinkedList()

    x = int(input("Enter the Input to Insert : "))
    LL.head = Node(x)

    # --------------------- Insertion --------------------------- #

    # Insertion at Start

    LL.insert_first()
    LL.insert_first()

    #LL.print()

    # Insertion at End

    LL.insert_last()
    LL.insert_last()

    #LL.print()

    # Insertion at Middle

    LL.insert_mid()
    #LL.print()
    LL.insert_mid()

    # --------------------- Traversal --------------------------- #
    print("\n--> The LinkedList is : ", end=" ")
    LL.print()

    # --------------------- Deletion --------------------------- #

    # Delete Node 1

    LL.delete_first()

    print("\n\n--> The LinkedList after deleting First Node : ", end=" ")
    LL.print()

    # Delete Last Node

    LL.delete_last()

    print("\n\n--> The LinkedList after deleting Last Node : ", end=" ")
    LL.print()

    # Delete InBetween Nodes

    LL.delete_mid()
    LL.print()

    # --------------------- Traversal & Searching --------------------------- #

    LL.search()
