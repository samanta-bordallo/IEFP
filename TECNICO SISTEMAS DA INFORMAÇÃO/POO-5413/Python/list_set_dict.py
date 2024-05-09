#List
import time
alunos = ["João", "Pedro", "Maria", "Jonas"]

print(alunos)
print(alunos[0])
print(alunos[1])
print(alunos[2])
print(alunos[3])

#para trocar um nome:
alunos[0] = "Carlos"

def teste(t:int):
    t *=2

x = 10
teste(x)
print(x)

def teste2(noveNome:str, pos:int, lista:list):
    lista[pos] = noveNome

teste2("Ricardo", 0, alunos)
print(alunos[0])

print(alunos.__len__())
print(len(alunos))

 #Para adicionar alunos
 #no final:
alunos.append("Maria Rita")
print(alunos.__len__())
#na posição específica
alunos.insert(1, "Novo aluno")

print(alunos)

#
st = time.time()
time.sleep(1)
ft = time.time()
print(ft-st)


#estudar pop
#acesso a lista v2
#list comprehension
