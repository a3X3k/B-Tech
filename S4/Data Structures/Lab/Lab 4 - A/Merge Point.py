class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def display(n):
    temp = n

    while temp:
        print(temp.data, end=" ")
        temp = temp.next
    print()


def intersection(n1, n2):
    temp1 = n1

    while temp1 is not None:
        temp2 = n2
        while temp2 is not None:
            if temp1 == temp2:
                print("\nIntersection Point is : {}".format(temp1.data))
                return
            else:
                temp2 = temp2.next

        temp1 = temp1.next

    print("\nNo Intersection Point")


head1 = Node(1)

nod1 = Node(2)
nod2 = Node(3)
nod3 = Node(4)
nod4 = Node(5)
nod5 = Node(6)
nod6 = Node(7)
nod7 = Node(8)

head1.next = nod1
head1.next.next = nod2
head1.next.next.next = nod3
head1.next.next.next.next = nod4
head1.next.next.next.next.next = nod5
head1.next.next.next.next.next.next = nod6

head2 = Node(9)
head2.next = nod7
#head2.next.next = nod4
#head2.next.next.next = nod5
#head2.next.next.next.next = nod6

print("Linked List 1 : ", end=" ")
display(head1)
print("Linked List 2 : ", end=" ")
display(head2)

intersection(head1, head2)
