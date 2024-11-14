class pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def exibir_informacoes(self):
        print(f"Nome: {self.nome}\nIdade: {self.idade}\n")
    
p1 = pessoa("Adriano", 30)
p2 = pessoa("Shun", 231)

p1.exibir_informacoes()
p2.exibir_informacoes()

