def primo(x):
    if x < 2:
        return False
    for i in range(2, int(x ** 0.5) + 1):
        if x % i == 0:
            return False
    return True

x = int(input("Digite um número: "))
if primo(x):
    print(True)
else:
    print(False)
    

