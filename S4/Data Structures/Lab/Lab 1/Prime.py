def prime(x):
    i = 2
    while i <= x / 2:
        if x % i == 0:
            return False
        i = i+1

    return True


n = int(input("Enter n : "))
print(prime(n))
