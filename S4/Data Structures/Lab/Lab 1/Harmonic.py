def har(x):
    if x == 1:
        return 1
    else:
        return (1 / x) + har(x - 1)


n = int(input("Enter n : "))

print(har(n))
