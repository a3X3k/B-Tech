class Circle:  # --> Parent Class
    def __init__(self, radius):
        self.radius = radius

    def cal_area(self):
        return self.radius * self.radius * 3.14

    def get_area(self):
        return self.cal_area()


class Cylinder(Circle):  # --> Child Class

    def __init__(self, radius, height):
        # --> The child's __init__() function overrides the inheritance of the parent's __init__() function.

        super().__init__(radius)  # -->
        self.height = height
        # --> super() function makes the child class inherit all the methods and properties from its parent class.

    def cal_area(self):  # --> Over rides cal_area Method in Circle Class
        return 2 * 3.14 * self.radius * self.height

    def get_area(self):  # --> Over rides get_area Method in Circle Class
        return self.cal_area()


r = int(input("Enter the Radius : "))
h = int(input("Enter the Height : "))

Obj1 = Circle(r)
Obj2 = Cylinder(r, h)

print("Area of the Circle : {}".format(Obj1.get_area()))
print("Area of the Cylinder : {}".format(Obj2.get_area()))
