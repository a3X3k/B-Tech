phy = -1
che = -1
bio = -1
math = -1
comp = -1
tot = 0

while phy < 0 or phy > 100:
    phy = int(input("Enter the Physics Mark : "))
    if phy < 0 or phy > 100:
        print("Enter the Range between 0 and 100!")

while che < 0 or che > 100:
    che = int(input("Enter the Chemistry Mark : "))
    if che < 0 or che > 100:
        print("Enter the Range between 0 and 100!")

while bio < 0 or bio > 100:
    bio = int(input("Enter the Biology Mark : "))
    if bio < 0 or bio > 100:
        print("Enter the Range between 0 and 100!")

while math < 0 or math > 100:
    math = int(input("Enter the Mathematics Mark : "))
    if math < 0 or math > 100:
        print("Enter the Range between 0 and 100!")

while comp < 0 or comp > 100:
    comp = int(input("Enter the Computer Mark : "))
    if comp < 0 or comp > 100:
        print("Enter the Range between 0 and 100!")

tot = phy + che + bio + math + comp

tot = (tot / 500) * 100

if tot >= 90:
    print("Grade A")

elif 80 <= tot < 90:
    print("Grade B")

elif 70 <= tot < 80:
    print("Grade C")

elif 60 <= tot < 70:
    print("Grade D")

elif 40 <= tot < 60:
    print("Grade E")

else:
    print("Grade F")
