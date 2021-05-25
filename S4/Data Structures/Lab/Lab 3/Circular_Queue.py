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
                x = int(input("Enter the Element to Insert : "))
                node = Node(x)

                if self.rear is None:
                    self.rear = node
                    self.front = node
                    continue
                else:
                    node.next = self.front
                    self.rear.next = node
                    self.rear = node
            else:
                return

    def dequeue(self):
        while True:
            x = int(input("Press 1 to Remove or any other Key to Exit : "))
            if x == 1:
                if self.front is None:
                    print("Dequeue : The Stack is Empty")
                    return

                elif self.front == self.rear:
                    self.front = None
                    self.rear = None

                else:
                    self.front = self.front.next
                    self.rear.next = self.front
            else:
                return

    def display(self):
        if self.front is None:
            print("Display : Queue is Empty")
            return
        else:
            temp = self.front
            print("Queue = ", end=" ")
            while temp != self.rear:
                print(temp.data, end=" ")
                temp = temp.next
            print(temp.data)

    def display_circular(self):
        if self.front is None:
            print("Display : Queue is Empty")
            return
        else:
            temp = self.front
            print("Circular Queue View = ", end=" ")
            i = 0;

            while i < 10:
                i = i + 1
                print(temp.data, end=" ")
                temp = temp.next
            print(temp.data)

    def Rear(self):
        if self.front is None:
            print("Rear : Queue is Empty")
            return
        else:
            temp = self.front
            while temp != self.rear:
                temp = temp.next
            print("Queue Rear : {}".format(temp.data))

    def Front(self):
        if self.front is None:
            print("Front : Queue is Empty")
            return
        else:
            print("Queue Front : {}".format(self.front.data))

    def isempty(self):
        if self.front is None:
            print("Size : Queue is Empty")
            return
        else:
            print("Queue is Not Empty")


if __name__ == '__main__':
    queue = Queue()
    queue.enqueue()
    queue.display()
    queue.Front()
    queue.Rear()
    queue.isempty()
    queue.dequeue()
    queue.display_circular()
    queue.Front()
    queue.Rear()
    queue.isempty()
