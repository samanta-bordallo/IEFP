
"""
# questão 1
print ("Alo Mundo")

# questão 2
num = input("Me de um numero: ")
print (f"O número dado foi {num}.")

# questão 3
n1 = int(input("Me de o primeiro numero: "))
n2 = int(input("Me de o segundo numero: "))
soma = n1 + n2
print(f"A soma dos numeros é {soma}.")

# questão 4
notas = []
for i in range(4):
    nota = float(input(f"Digite a nota do {i+1}° bimestre: "))
    notas.append(nota)
media = sum(notas) / len(notas)
print(f"A média das notas é: {media}.")

#questão 5
metros = float(input("Me de uma quantidade de metros: "))
calc = metros * 100
print(f"Esse valor corresponde a {calc} centímetros.")

#questão 6
import math
raio = float(input("Me de o valor do raio de um circulo: "))
area = math.pi * raio ** 2
print(f"A área do circulo é {area} cm²")

#questao 7
#questao 8
valor_hora = float(input("Quanto voce recebe por hora? "))
horas = float(input("Quantas horas voce trabalha por mes? "))
valor_mes = valor_hora * horas
print(f"No fim do mes voce recebe {valor_mes} euros.")

#questao 9
temF = float(input("Me de o valor da temperatura em Fahrenheit: "))
cont1 = temF - 32
cont2 = cont1/9
celsius = 5 * cont2
print(f"A temperatura em graus celsius é {celsius}.")

#questão 10
celsius = float(input("Me de o valor da temperatura em Celsius: "))
cont1 = celsius * 9 / 5
F = cont1 + 32
print(f"A temperatura em graus fahrenheit é {F}.")


#questao 11
n1 = int(input("Me de o primeiro numero inteiro: "))
n2 = int(input("Me de o segundo numero inteiro: "))
n3 = float(input("Me de o segundo numero real: "))
soma1 = (2 * n1) * (n2/2)
soma2 = (3 * n1) + n3
soma3 = n3 ** 3
print(f"o produto do dobro do primeiro com metade do segundo é: {soma1}.")
print(f"a soma do triplo do primeiro com o terceiro é: {soma2}.")
print(f"o terceiro elevado ao cubo é: {soma3}.")

#questao 12"""


