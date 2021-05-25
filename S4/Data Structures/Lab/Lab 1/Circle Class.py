class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return self.radius * self.radius * 3.14

    def perimeter(self):
        return 2 * 3.14 * self.radius


r = int(input("Enter the Radius : "))

Obj1 = Circle(r)

print("Area of the Circle : {}".format(Obj1.area()))

print("Perimeter of the Circle : {}".format(Obj1.perimeter()))
