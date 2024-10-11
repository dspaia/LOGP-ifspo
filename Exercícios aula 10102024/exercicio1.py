escolha = 1
while escolha!=0:
    escolha = int(input("Digite 1 para Celsius --> Fahrenheit\nDigite 2 para Fahrenheit --> Celsius\nDigite 0 p/ encerrar\n:"))

    if escolha == 0:
        break;

    elif escolha == 1:
        def c_para_f(c, f):
            
            f = [(temp * 9/5) + 32 for temp in c]
            return f
        
        x = []
        y = []

        n_temp = int(input("Quantas temperaturas deseja inserir? "))
        for i in range(n_temp):
            t = float(input(f"Digite a temperatura {i+1} em Celsius: "))
            x.append(t)
        
        conversao = c_para_f(x, y)
        
        print(f"{x} --> {conversao}\n")

    elif escolha == 2:
        def f_para_c(f, c):
            c = [(temp - 32) * (5/9) for temp in f]
            return c
        
        x = []
        y = []

        n_temp = int(input("Quantas temperaturas deseja inserir? "))
        for i in range(n_temp):
            t = float(input(f"Digite a temperatura {i+1} em Celsius: "))
            x.append(t)
        
        conversao = f_para_c(x, y)

        print(f"{x} --> {conversao}\n")

    else: 
        print("Número inválido! Tente novamente.")