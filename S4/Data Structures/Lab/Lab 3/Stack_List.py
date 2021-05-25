def push(stack):
    while True:

        x = int(input("Press 1 to Insert or any other Key to Exit : "))
        if x == 1:
            x = int(input("Enter the Element to Insert : "))
            stack.append(x)
        else:
            return


def display(stack):
    if len(stack) == 0:
        print("The Stack is Empty")
        return
    else:
        print("\nStack is : {}".format(s))


s = []
push(s)
display(s)
