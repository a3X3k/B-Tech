class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.head = None
        self.size = 0

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
            s = []
            while temp:
                s.append(temp.data)
                temp = temp.next

            s.reverse()
            print("\nThe Stack is : {}".format(s))

    def top(self):
        if self.size == 0:
            print("Top : Stack is Empty")
            return
        else:
            print("The Stack top is {}".format(self.head.data))

    def isempty(self):
        if self.size == 0:
            print("Empty : The Stack is Empty")
            return
        else:
            print("The Stack is not Empty")

    def pop(self):
        while True:
            x = int(input("Press 1 to Pop or any other Key to Exit : "))
            if x == 1:
                if self.size == 0:
                    print("Pop : The Stack is Empty")
                    return
                elif self.size == 1:
                    self.head = None
                    self.size = self.size - 1
                else:
                    self.head = self.head.next
                    self.size = self.size - 1
            else:
                return


if __name__ == '__main__':
    stack = Stack()
    stack.push()
    stack.display()
    stack.top()
    stack.isempty()
    stack.pop()
    stack.display()
    stack.top()
    stack.isempty()
    print("Size of the Stack is {}".format(stack.size))
    #print(stack.size)
