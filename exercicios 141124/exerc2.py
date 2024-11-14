class Carro:
    def __init__(self, marca, modelo, ano):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
    
    def exibir_detalhes(self):
        print(f"Marca: {self.marca}\nModelo: {self.modelo}\nAno: {self.ano}\n")

c1 = Carro('Toyota', 'Hylux', '1880')
c2 = Carro ('Tesla', 'Elon Musk King', '1510')
c1.exibir_detalhes()
c2.exibir_detalhes()