from pydantic import BaseModel
class Veiculo(BaseModel):
    def __init__(self, modelo, ano, cor, preco, quantidade):
        self.modelo = modelo
        self.ano = ano
        self.cor = cor
        self.preco = preco
        self.quantidade = quantidade
class Pessoa(BaseModel):
    def __init__(self, nome, email, data_nascimento, profissao):
        self.nome = nome
        self.email = email
        self.data_nascimento = data_nascimento
        self.profissao = profissao

class Gestor(Pessoa):
    def __init__(self, nome, email, data_nascimento, profissao, salario):
        super().__init__(nome, email, data_nascimento, profissao)
        self.salario = salario

class Vendedor(Pessoa):
    def __init__(self, nome, email, data_nascimento, profissao, comissao_base, comissao=200):
        super().__init__(nome, email, data_nascimento, profissao)
        self.comissao_base = comissao_base
        self.comissao = comissao

    def aumentar_comissao(self, valor):
        self.comissao += valor

    def diminuir_comissao(self, valor):
        self.comissao -= valor

    def mostrar_comissao(self):
        print(f"Comissão do vendedor {self.nome}: {self.comissao} euros")

class Cliente(Pessoa):
    def __init__(self, nome, email, data_nascimento, profissao, endereco):
        super().__init__(nome, email, data_nascimento, profissao)
        self.endereco = endereco