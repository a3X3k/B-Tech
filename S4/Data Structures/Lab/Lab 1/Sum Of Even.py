n = int(input("Enter the Number : "))

i = 1
sum_of_even = 0

while i <= n:
    if i % 2 == 0:
        sum_of_even += i
    i = i + 1

print("Sum of the Even Numbers is : {}".format(sum_of_even))
