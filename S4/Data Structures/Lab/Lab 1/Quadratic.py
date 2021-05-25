import math

a = int(input("Enter A : "))
b = int(input("Enter B : "))
c = int(input("Enter C : "))

x = 0
y = 0

determinant = (b * b) - (4 * a * c)

sqrt_val = math.sqrt(abs(determinant))

if determinant == 0:
    print("Real and same roots {}".format(-b / (2 * a)))

elif determinant > 0:
    print("Real and different roots {0:.2f} and {0:.2f}".format((-b + sqrt_val) / (2 * a), (-b - sqrt_val) / (2 * a)))

else:
    print("Complex Roots {} +i({}),{} -i({})".format((- b / (2 * a)),sqrt_val, (- b / (2 * a)),sqrt_val))
