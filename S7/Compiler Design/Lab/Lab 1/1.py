n = input('Enter an Input: ')

Key = ''

for i in n:

    if (len(n) > 1 and n[0] == '0' and n[1] != '.') or (len(n) == 1 and i == '.'):

        Key = 'Invalid Number'

        break

    if i >='0' and i <='9':
        
        if Key != 'float': Key = 'int'
            
    elif i == '.': Key = 'float'

    else:

        Key = 'Invalid Number'

        break

if Key == 'float': print('<FLOAT,', n + '>')

elif Key == 'int': print('<NUM,', n + '>')

else : print(Key)
