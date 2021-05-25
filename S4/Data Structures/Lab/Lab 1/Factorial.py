def fac(x):
    if x == 1 or x == 0:
        return 1
    else:
        return x * fac(x - 1)


n = int(input("Enter n : "))

print(fac(n))
