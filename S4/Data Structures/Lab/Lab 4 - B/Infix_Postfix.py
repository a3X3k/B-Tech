class stack:
    def __init__(self):
        self.item = []

    def push(self, it):
        self.item.append(it)

    def peek(self):
        if self.isempty():
            return 0
        return self.item[-1]

    def pop(self):
        if self.isempty():
            return 0
        return self.item.pop()

    def isempty(self):
        if self.item == []:
            return True
        else:
            return False

    def display(self):
        if self.isempty():
            return
        temps = stack()
        while not self.isempty():
            x = self.peek()
            print("~", x)
            temps.push(x)
            self.pop()
        while not temps.isempty():
            x = temps.peek()
            self.push(x)
            temps.pop()

    def check(self, i):
        precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '%': 2, '^': 3}
        if self.peek() == '(':
            return False
        a = precedence[i]
        b = precedence[self.peek()]
        if a <= b:
            return True
        else:
            return False

    def Postfix(self, exp):
        output = ""

        for i in exp:

            if i.isalpha():  # check if operand add to output
                output = output + i
                output = output + " "

            elif i == " ":
                continue
            # If the character is an '(', push it to stack
            elif i == '(':
                self.push(i)

            elif i == ')':  # if ')' pop till '('
                while self.isempty() != True and self.peek() != '(':
                    n = self.pop()
                    output = output + n
                    output = output + " "
                if self.isempty() != True and self.peek() != '(':
                    return -1
                else:
                    x = self.pop()
            else:
                while self.isempty() != True and self.check(i):
                    c = self.pop()
                    output = output + c
                    output = output + " "
                self.push(i)

        # pop all the operator from the stack
        while not self.isempty():
            result = self.pop()
            output = output + result
            output = output + " "
        print("The Postfix Expression is {}".format(output))
        self.display()


stack = stack()
inp_str = input("Enter the Infix Expression : ")
stack.Postfix(inp_str)

