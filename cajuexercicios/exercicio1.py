import math

def segundo_grau(a, b, c):
    jorge = (b*b) - 4 * (a) * (c)
    x1 = (-(b) +  math.sqrt(jorge))/2 * a
    x2 = (-(b) -  math.sqrt(jorge))/2 * a
    return x1, x2

a = int(input("Digite o coeficiente a: "))
b = int(input("Digite o coeficiente b: "))
c = int(input("Digite o coeficiente c: "))

resultado = segundo_grau (a, b, c)
print ("\nOs valores para x são: ",resultado)
