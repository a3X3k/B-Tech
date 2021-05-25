def dis(x):
    length = len(str(x))

    temp = x
    tot = 0

    while temp > 0:
        it = temp % 10
        # print(it)
        tot = tot + pow(it, length)
        temp = temp // 10
        length = length - 1

    if tot == x:
        return True
    else:
        return False


n = int(input("Enter n : "))

print(dis(n))
