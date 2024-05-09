#condições

idade = int(input("Qual a sua idade "))

if idade >= 18:
    print("Adulto")
elif idade > 15:
    print("Teen")
else:
    print("Criança")



letra = input("Digite uma letra ")

if letra.upper() == "A" or letra.upper() == "B":
    print("Letra A ou B")
else:
    print("Nao letra A nem B")


num = int(input("Digite um numero "))

if num % 2 == 0 and num % 5 == 0:
    print("o numero é par e divisivel por 5")
print("The end")

