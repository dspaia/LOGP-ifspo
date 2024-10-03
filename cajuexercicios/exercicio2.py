def soma(x,y):
    total = x + y
    return total

x = float(input("Digite o primeiro valor: "))
y = float(input("Digite o segundo valor: "))

resultado = soma(x,y)
print("O resultado da soma é {:.0f}".format(resultado))