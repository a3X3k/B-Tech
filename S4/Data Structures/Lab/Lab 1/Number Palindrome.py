def pal(x):
    y = x
    rev = 0

    while y > 0:
        mod = y % 10
        rev = (rev * 10) + mod
        y = y // 10

    if rev == x:
        return True
    else:
        return False


n = int(input("Enter n : "))
print(pal(n))
