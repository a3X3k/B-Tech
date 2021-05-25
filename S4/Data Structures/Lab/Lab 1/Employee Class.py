class Employee:
    name = "Abhi"
    des = "CEO"
    dept = "CSE"


print("\nName Of the Employee : {}".format(Employee.name))
print("Designation Of the Employee : {}".format(Employee.des))
print("Department Of the Employee : {}\n".format(Employee.dept))

setattr(Employee, "Date_of_Joining", "01/01/2020")

print(hasattr(Employee, 'Date_of_Joining'))
print("{}\n".format(getattr(Employee, 'Date_of_Joining')))

print(hasattr(Employee, 'dept'))
print("{}\n".format(getattr(Employee, 'dept')))

print(getattr(Employee, 'name'))

delattr(Employee, 'des')
print(hasattr(Employee, 'des'))
