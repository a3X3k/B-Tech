class Hanoi:

    def __init__(self, label):
        self.data = list()
        self.label = label

    def is_empty(self):
        return len(self.data) == 0

    def push(self, e):
        self.data.append(e)

    def top(self):
        return self.data[len(self.data) - 1]

    def pop(self):
        return self.data.pop()


def traversal(rod_A, rod_B):
    if rod_A.is_empty():
        rod_A.push(rod_B.pop())
        print(rod_B.label, "-->", rod_A.label)
    elif rod_B.is_empty():
        rod_B.push(rod_A.pop())
        print(rod_A.label, "-->", rod_B.label)
    elif rod_B.top() < rod_A.top():
        rod_A.push(rod_B.pop())
        print(rod_B.label, "-->", rod_A.label)
    else:
        rod_B.push(rod_A.pop())
        print(rod_A.label, "-->", rod_B.label)


def HanoiTower(n):
    rod_A = Hanoi("A")
    rod_B = Hanoi("B")
    rod_C = Hanoi("C")

    min = (2 ** n) - 1

    for obj in range(n, 0, -1):
        rod_A.push(obj)

    if n % 2 == 0:
        rod_B, rod_C = rod_C, rod_B

    for i in range(min):
        if i % 3 == 0:
            traversal(rod_A, rod_C)
        if i % 3 == 1:
            traversal(rod_A, rod_B)
        if i % 3 == 2:
            traversal(rod_B, rod_C)


temp = int(input("Number of Disks: "))
if temp == 0:
    print("No Disk")
else:
    HanoiTower(temp)
