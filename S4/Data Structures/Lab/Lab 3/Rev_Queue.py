class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Queue:
    def __init__(self):
        self.front = None
        self.rear = None
        self.list = []

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
                    self.rear.next = node
                    self.rear = node
            else:
                return

    def display(self):
        if self.front is None:
            print("Display : Queue is Empty")
            return
        else:
            temp = self.front
            while temp:
                self.list.append(temp.data)
                temp = temp.next
            print("Queue : {}".format(self.list))

    def reverse(self):
        self.list.reverse()
        print("Reversed Queue : {}".format(self.list))


if __name__ == '__main__':
    queue = Queue()
    queue.enqueue()
    queue.display()
    queue.reverse()
