def push(s, item):
    s.append(item)
    return s


def display(s1):
    print("\nStack is ", end="")
    for i in range(len(s1) - 1, -1, -1):
        print(s1[i], end=' ')
    print()


def isempty(s2):
    return len(s2) == 0


def pop(s3):
    if isempty(s3):
        print("Stack Underflow")
        return
    return s3.pop()


def insertAtBottom(s5, item):
    if isempty(s5):
        push(s5, item)
    else:
        temp = pop(s5)
        insertAtBottom(s5, item)
        push(s5, temp)


def reverse(s4):
    if not isempty(s4):
        temp = pop(s4)
        reverse(s4)
        insertAtBottom(s4, temp)


stack = []

n = int(input("Enter the Number of Elements : "))

for j in range(n):
    m = int(input("Enter the Element {} : ".format(j + 1)))
    push(stack, m)

display(stack)

# pop(stack)
# pop(stack)

reverse(stack)

display(stack)
