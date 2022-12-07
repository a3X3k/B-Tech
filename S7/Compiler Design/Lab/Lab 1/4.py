n = input('Enter an Input : ').replace(' ','')

Operators = ['**','+','-','/','//','%','*','^']

s = ''

c = 0

for i in range(len(n)):

    if n[i] == '=':

        s += '<ID, '+ n[:i] + '> <=> '

        c = i

    if n[i] in Operators:

        if n[c+1:i].isdigit(): s += '<NUM, '+ n[c+1:i] + '>' + ' <'+ n[i] + '> '

        else: s += '<ID, ' + n[c+1:i] + '>' + ' <' + n[i] + '> '

        c = i

    if n[i] == ';':

        if n[c+1:i].isdigit(): s += '<NUM, '+ n[c+1:i] +'>' + ' <SEMI>'

        else: s += '<ID, ' + n[c+1:i] + '>' + ' <SEMI>'

print(s)
