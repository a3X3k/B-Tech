class Stack:
    def __init__(self, size):
        self.stack = []
        self.size = size

    def Push(self, element):
        if len(self.stack) != self.size:
            self.stack.append(element)
        else:
            self.stack, self.size = expansion(self)
            self.stack.append(element)

    def IsEmpty(self):
        return len(self.stack) == 0

    def Pop(self):
        if self.IsEmpty():
            print("Empty Stack")
        else:
            return self.stack.pop()


def Display(Stack1):
    print("The Stack is : ",end=" ")
    print(Stack1.stack)


def expansion(st):
    s = Stack(st.size + 5)
    for i in range(st.size):
        s.Push(st.stack.pop(0))
    return s.stack, s.size


n = int(input("Enter Stack Capacity : "))
stack = Stack(n)
p = int(input("Enter the Number of Elements to be Pushed : "))
f = 0
for i in range(p):
    if i > n - 1 and f == 0:
        f = 1
        print("Stack Expanded to the capacity of {}".format(stack.size + 5))
    ele = int(input("Enter the Element {} : ".format(i + 1)))
    stack.Push(ele)
Display(stack)
