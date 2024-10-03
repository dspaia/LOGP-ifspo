def fatorial(x):
    resultado = 1
    for i in range(1, x + 1):
        resultado *= i
    return resultado

x = int(input("Digite o valor de início: "))
resultado = fatorial(x)
print(f"O fatorial de {x} é {resultado}")