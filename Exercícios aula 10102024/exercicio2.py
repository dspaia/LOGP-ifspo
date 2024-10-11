def cont_char(s):
    cont = {}  
    for char in s:
        if char != " ":  
            if char in cont:
                cont[char] += 1  
            else:
                cont[char] = 1 
    return cont

x = str(input("Digite alguma String:"))
resultado = cont_char(x)
print(resultado)