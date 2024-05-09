#questao 01:
class Bola:
    def __init__(self, cor, circunferencia, material):
        self.cor = cor
        self.circunferencia = circunferencia
        self.material = material

    def trocaCor(self, nova_cor):
        self.cor = nova_cor

    def mostraCor(self):
        print("A cor da bola é", self.cor)


bola_futebol = Bola(cor="branca", circunferencia=68, material="couro")
print("Cor da bola antes da troca:")
bola_futebol.mostraCor()

bola_futebol.trocaCor("verde")
print("\nCor da bola depois da troca:")
bola_futebol.mostraCor()

'''
#questao 02:
class Quadrado:
    def __init__(self, tamanhoLado):
        self.tamanhoLado = tamanhoLado
    def mudarLado(self, novo_lado):
        self.tamanhoLado = novo_lado
    def retornarLado(self):
        print("O tamanho do lado é",self.tamanhoLado)
    def calcularArea(self):
        print(f"A área do quadrado é {self.tamanhoLado * self.tamanhoLado} cm2")

quadrado1 = Quadrado(tamanhoLado=35)
print(f"O tamanho do lado do quadrado é: ")
quadrado1.retornarLado()
'''