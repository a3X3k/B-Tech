def geo(x):
    if x == 0:
        return 1
    else:
        return (1 / pow(2, x)) + geo(x - 1)


n = int(input("Enter n : "))

print(geo(n-1))
