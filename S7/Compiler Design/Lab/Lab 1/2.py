def Check(s):

    if not s[0].isalpha() and s[0] != '_':

        return "Invalid Identifier"

    for i in s[1:]:

        if not i.isalnum() and i != '_':

            return "Invalid Identifier"

    return f"<ID, {s}>"
      
print(Check(input("Enter the Input : ")))
