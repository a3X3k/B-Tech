class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Queue:
    def __init__(self):
        self.front = None
        self.rear = None

    def enqueue(self):
        while True:
            x = int(input("Press 1 to Insert or any other Key to Exit : "))
            if x == 1:
                x = int(input("Enter 1 to Insert at Front or any other Key Insert at Rear : "))
                if x == 1:
                    x = int(input("Enter the Element to Insert : "))
                    node = Node(x)

                    if self.rear is None:
                        self.rear = node
                        self.front = node
                        continue
                    else:
                        node.next = self.front
                        self.front = node

                else:
                    x = int(input("Enter the Element to Insert : "))
                    node = Node(x)

                    if self.rear is None:
                        self.rear = node
                        self.front = node
                        continue
                    else:
                        self.rear.next = node
            else:
                return

    def dequeue(self):
        while True:
            x = int(input("Press 1 to Remove or any other Key to Exit : "))
            if x == 1:
                x = int(input("Enter 1 to Delete at Front or any other Key to Delete at Rear : "))
                if x == 1:
                    if self.front is None:
                        print("Dequeue : The Deque is Empty")
                        return

                    elif self.front == self.rear:
                        self.front = None
                        self.rear = None

                    else:
                        self.front = self.front.next
                else:
                    if self.front is None:
                        print("Dequeue : The Deque is Empty")
                        return

                    elif self.front == self.rear:
                        self.front = None
                        self.rear = None

                    else:
                        temp = self.front
                        while temp.next:
                            temp = temp.next
                        temp.next = None
                        self.rear = temp
            else:
                return

    def display(self):
        if self.front is None:
            print("Display : Deque is Empty")
            return
        else:
            temp = self.front
            print("Deque = ", end=" ")
            while temp:
                print(temp.data, end=" ")
                temp = temp.next

            print("\n")

    def Rear(self):
        if self.front is None:
            print("Rear : Deque is Empty")
            return
        else:
            temp = self.front
            while temp.next:
                temp = temp.next

            print("Deque Rear : {}".format(temp.data))

    def Front(self):
        if self.front is None:
            print("Front : Deque is Empty")
            return
        else:
            print("Deque Front : {}".format(self.front.data))

    def isempty(self):
        if self.front is None:
            print("Size : Deque is Empty")
            return
        else:
            print("Deque is Not Empty")


if __name__ == '__main__':
    queue = Queue()
    queue.enqueue()
    queue.display()
    queue.Front()
    queue.Rear()
    queue.isempty()
    queue.dequeue()
    queue.display()
    queue.Front()
    queue.Rear()
    queue.isempty()
