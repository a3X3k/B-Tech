class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Stack:
    def __init__(self):
        self.head = None
        self.size = 0
        self.queue = []

    def push(self):
        while True:
            x = int(input("Press 1 to Insert or any other Key to Exit : "))
            if x == 1:
                x = int(input("Enter the Element to Insert : "))
                node = Node(x)

                if self.head is None:
                    self.head = node
                    self.size = self.size + 1
                else:
                    node.next = self.head
                    self.head = node
                    self.size = self.size + 1
            else:
                return

    def display(self):
        if self.size == 0:
            print("Display : Stack is Empty")
            return
        else:
            temp = self.head
            while temp:
                self.queue.append(temp.data)
                temp = temp.next

            self.queue.reverse()
            print("\nThe Stack is : {}".format(self.queue))

    def reverse(self):
        self.queue.reverse()
        print("Reversed Stack : {}".format(self.queue))


if __name__ == '__main__':
    stack = Stack()
    stack.push()
    stack.display()
    stack.reverse()
