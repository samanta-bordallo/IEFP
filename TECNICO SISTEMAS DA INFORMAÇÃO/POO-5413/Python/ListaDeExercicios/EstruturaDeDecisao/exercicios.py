'''
#exercicio 1
n1 = int(input("Me de o primeiro numero: "))
n2 = int(input("Me de o segundo numero: "))
if n1 > n2:
    print(f"O número {n1} é o maior.")
else:
    print(f"O número {n2} é o maior.")


#exercicio 7
n1 = int(input("Me de o primeiro numero: "))
n2 = int(input("Me de o segundo numero: "))
n3 = int(input("Me de o terceiro numero: "))
if n1 > n2 and n1 > n3:
    print(f"O número {n1} é o maior.")
elif n2 > n1 and n2 > n3:
    print(f"O número {n2} é o maior.")
else:
    print(f"O número {n2} é o maior.")


#exercicio 9
numeros = [float(input("Digite o primeiro número: ")),
           float(input("Digite o segundo número: ")),
           float(input("Digite o terceiro número: "))]
numeros_ordenados = sorted(numeros, reverse=True)
print("Números em ordem decrescente:", numeros_ordenados)
'''

#exercicio 10
# Função para calcular o reajuste do salário
def calcular_reajuste(salario):
    percentual_aumento = 0
    aumento = 0

    if salario <= 280:
        percentual_aumento = 20
    elif salario <= 700:
        percentual_aumento = 15
    elif salario <= 1500:
        percentual_aumento = 10
    else:
        percentual_aumento = 5

    aumento = salario * (percentual_aumento / 100)
    novo_salario = salario + aumento

    return percentual_aumento, aumento, novo_salario

# Função para formatar a saída
def formatar_saida(salario, percentual_aumento, aumento, novo_salario):
    print("Salário antes do reajuste: R$", salario)
    print("Percentual de aumento aplicado: ", percentual_aumento, "%")
    print("Valor do aumento: R$", aumento)
    print("Novo salário, após o aumento: R$", novo_salario)

# Programa principal
if __name__ == "__main__":
    # Entrada do usuário para o salário
    salario = float(input("Digite o salário do colaborador: "))

    # Calcular reajuste
    percentual_aumento, aumento, novo_salario = calcular_reajuste(salario)

    # Mostrar resultados
    formatar_saida(salario, percentual_aumento, aumento, novo_salario)
