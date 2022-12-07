Identifier = ["if", "while", "then", "else", "switch", "int", "float"]

s = input("Enter the Keyword : ")

if s in Identifier:

    s = "<" + s.upper() + ">"
    
    print(s)

else:

    print("Not a valid Keyword")
