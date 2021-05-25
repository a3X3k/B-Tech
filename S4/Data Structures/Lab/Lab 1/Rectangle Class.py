class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width


l = int(input("Enter Length : "))
w = int(input("Enter Width : "))

Obj1 = Rectangle(l, w)

print("Area of the Rectangle : {}".format(Obj1.area()))
