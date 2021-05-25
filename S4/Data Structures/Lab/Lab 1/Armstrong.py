n = int(input("Enter the Input : "))

temp = n
tot = 0

while temp>0:
    it = temp%10
    #print(it)
    tot = tot + (it*it*it)
    temp = temp//10

#print(tot)

if tot==n:
    print("Its an Armstrong Number")
else:
    print("Its not an Armstrong Number")

