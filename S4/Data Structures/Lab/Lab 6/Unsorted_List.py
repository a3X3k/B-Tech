class list:
    def __init__(self):
        self.s = []
        self.size = 0

    def display(self):
        if self.size == 0:
            print("Display : The List is Empty")
            return
        else:
            print(self.s)

    def enqueue(self):
        while True:

            x = int(input("Press 1 to Insert or any other Key to Exit : "))
            if x == 1:
                a = int(input("Enter the Element to Insert : "))
                b = int(input("Enter the Priority to Insert : "))
                self.s.append((a, b))
                self.size = self.size + 1
                self.display()

            else:
                return

    def dequeue(self):
        while True:
            x = int(input("Press 1 to Delete or any other Key to Exit : "))
            if x == 1:
                if self.size == 0:
                    print("List is Empty")
                    return
                else:
                    self.s = sorted(self.s, key=lambda x: x[1])
                    temp = self.s.pop(0)
                    print("Poped Element : {}".format(temp))
                    self.size = self.size - 1
            else:
                return


if __name__ == '__main__':
    l = list()
    l.enqueue()
    l.dequeue()
