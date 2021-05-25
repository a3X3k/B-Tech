def pal(x):
    if x == x[::-1]:
        return True
    else:
        return False


n = (input("Enter n : "))

print(pal(n))
