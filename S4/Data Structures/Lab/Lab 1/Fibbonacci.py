n = int(input("Enter the Input : "))

a = 0
b = 1

print(a)

print(b)

for i in range(n-2):
    c = a + b
    print(c)
    a = b
    b = c
