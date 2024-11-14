class Animal:
    def emitir_som(self):
        pass
class cachorro(Animal):
    def emitir_som(self):
        print("AU AU!")
    
class gato(Animal):
    def emitir_som(self):
        print("MIAU!")
    
c = cachorro()
g = gato()
c.emitir_som()
g.emitir_som()


