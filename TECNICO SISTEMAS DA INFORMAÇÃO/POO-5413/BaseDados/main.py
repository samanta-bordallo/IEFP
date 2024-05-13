from fastapi import FastAPI
from modelos import *

#exercicio feito no dia 09/05/2024
#por Samanta Bordallo

app = FastAPI()

# Dados fictícios de carros para simular um banco de dados
carros_db = [
    {"marca": "Toyota", "modelo": "Corolla", "ano": 2020, "preco": 50000},
    {"marca": "Honda", "modelo": "Civic", "ano": 2019, "preco": 45000},
    {"marca": "Ford", "modelo": "Mustang", "ano": 2022, "preco": 70000}
]

# Rotas da API
@app.get("/")
async def root():
    return {"message": "Bem-vindo ao stand de carros"}

@app.get("/carros/")
async def listar_carros():
    return carros_db

@app.get("/carros/{carro_id}")
async def obter_carro(carro_id: int):
    if carro_id < 0 or carro_id >= len(carros_db):
        return {"error": "Carro não encontrado"}
    return carros_db[carro_id]

@app.post("/carros/")
async def adicionar_carro(Veiculo: Veiculo):
    carros_db.append(Veiculo.dict())
    return {"message": "Carro adicionado com sucesso"}

@app.put("/carros/{carro_id}")
async def atualizar_carro(carro_id: int, novo_carro: Veiculo):
    if carro_id < 0 or carro_id >= len(carros_db):
        return {"error": "Carro não encontrado"}
    carros_db[carro_id] = novo_carro.dict()
    return {"message": "Carro atualizado com sucesso"}

@app.delete("/carros/{carro_id}")
async def remover_carro(carro_id: int):
    if carro_id < 0 or carro_id >= len(carros_db):
        return {"error": "Carro não encontrado"}
    carros_db.pop(carro_id)
    return {"message": "Carro removido com sucesso"}
