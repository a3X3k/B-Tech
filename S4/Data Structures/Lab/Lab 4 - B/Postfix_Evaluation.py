class post_fix:
    def __init__(self):
        self.stack = []
        self.top = -1

    def pop(self):
        if self.top == -1:
            return
        else:
            self.top -= 1
            return self.stack.pop()

    def push(self, i):
        self.top += 1
        self.stack.append(i)

    def postfix(self, ab):
        for i in ab:

            try:
                self.push(int(i))

            except ValueError:
                a = self.pop()
                b = self.pop()

                if i == '+':
                    result = int(b) + int(a)  # old val <operator> recent value

                elif i == '-':
                    result = int(b) - int(a)

                elif i == '*':
                    result = int(b) * int(a)

                elif i == '%':
                    result = int(b) % int(a)

                elif i == '/':
                    result = int(b) / int(a)

                elif i == '**':
                    result = int(b) ** int(a)

                self.push(result)

        return int(self.pop())


input_string = input("Enter the Expression : ")

array = input_string.split(' ')
obj = post_fix()
print("Result : {}".format(obj.postfix(array)))

