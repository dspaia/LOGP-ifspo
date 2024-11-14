class Conta_bancaria:
    def __init__(self, titular, saldo):
        self.titular = titular
        self.__saldo = saldo
    
    def depositar(self, valor):
        self.__saldo += valor
    
    def sacar(self, valor):
        if valor <= self.__saldo:
            self.__saldo -= valor
        
        else:
            print("otario")

    def exibir_saldo(self):
        print(f"Saldo: {self.__saldo}")
    
conta = Conta_bancaria('Andreia', 1000)
conta.depositar(2000)
conta.sacar(500)
conta.exibir_saldo()
conta.sacar(10000)

