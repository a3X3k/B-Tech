class Vehicle:
    def __init__(self, name, type, color, price):
        self.name = name
        self.type = type
        self.color = color
        self.price = price

    def details(self):
        return self.name, self.type, self.color, self.price


# n = input("Enter the Name : ")
# t = input("Enter the Type : ")
# c = input("Enter the Color : ")
# p = input("Enter the Price : ")

Car1 = Vehicle("Ferrari", "Convertible Car", "Red", 60000.00)

n, t, c, p = Car1.details()

print("\nName Of the Vehicle : {}".format(n))
print("Type Of the Vehicle : {}".format(t))
print("Color Of the Vehicle : {}".format(c))
print("Price Of the Vehicle : {}".format(p))

# n = input("\nEnter the Name : ")
# t = input("Enter the Type : ")
# c = input("Enter the Color : ")
# p = input("Enter the Price : ")

Car2 = Vehicle("Jump", "Van", "Blue", 10000.00)

n, t, c, p = Car2.details()

print("\nName Of the Vehicle : {}".format(n))
print("Type Of the Vehicle : {}".format(t))
print("Color Of the Vehicle : {}".format(c))
print("Price Of the Vehicle : {}".format(p))
