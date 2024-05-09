from classes import Veiculo, Gestor, Vendedor, Cliente

# Função para exibir as opções de usuário
def exibir_opcoes_usuario():
    print("Seja bem-vindo à concessionária da Sasá.")
    print("O que você representa na empresa?")
    print("1 - Gestor")
    print("2 - Vendedor")
    print("3 - Cliente")

# Função para listar os veículos
def listar_veiculos(veiculos):
    print("\nLista de Veículos:")
    for veiculo in veiculos:
        print("Modelo:", veiculo.modelo)
        print("Ano:", veiculo.ano)
        print("Cor:", veiculo.cor)
        print("Preço:", veiculo.preco)
        print("Quantidade:", veiculo.quantidade)
        print("-------------------------")

# Função para realizar a venda de um veículo
def realizar_venda(veiculos, vendedor):
    print("\nVeículos Disponíveis para Venda:")
    for i, veiculo in enumerate(veiculos):
        print(f"{i+1} - {veiculo.modelo}")
    opcao = int(input("Escolha o número do veículo que deseja vender: "))
    veiculo_vendido = veiculos.pop(opcao - 1)
    print(f"Veículo vendido: {veiculo_vendido.modelo}")

    # Aumentar a comissão do vendedor em 100 euros
    vendedor.aumentar_comissao(100)

# Função principal
def main():
    # Criando alguns veículos
    veiculos = [
        Veiculo("Toyota Corolla", 2022, "Prata", 90000, 5),
        Veiculo("Ford Fusion", 2021, "Preto", 80000, 3),
        Veiculo("Volkswagen Golf", 2022, "Branco", 85000, 7),
        Veiculo("BMW Série 3", 2021, "Azul", 120000, 2),
        Veiculo("Honda Civic", 2022, "Vermelho", 95000, 4),
        Veiculo("Chevrolet Onix", 2021, "Cinza", 70000, 6),
        Veiculo("Mercedes-Benz Classe C", 2022, "Prata", 150000, 1)
    ]

    # Criando alguns vendedores com comissão inicial
    vendedor1 = Vendedor("Maria", "maria@example.com", "1990-10-20", "Vendedor", 0.1)
    vendedor2 = Vendedor("João", "joao@example.com", "1985-05-15", "Vendedor", 0.1)

    lista_vendedores = [vendedor1, vendedor2]

    # Exibindo as opções de usuário
    exibir_opcoes_usuario()
    opcao_usuario = int(input("Digite o número correspondente à sua função na empresa: "))

    # Se o usuário for um gestor
    if opcao_usuario == 1:
        gestor = Gestor("José", "jose@example.com", "1975-03-25", "Gerente", 5000)
        print(f"\nOlá, {gestor.nome}!")

        # Opções disponíveis para o gestor
        while True:
            print("\nOpções disponíveis para gestor:")
            print("1 - Listar vendedores")
            print("2 - Listar veículos")
            print("3 - Listar comissão dos vendedores")
            print("0 - Sair")

            escolha = int(input("Escolha uma opção: "))

            if escolha == 1:
                # Implementar a listagem de vendedores
                pass
            elif escolha == 2:
                listar_veiculos(veiculos)
            elif escolha == 3:
                print("\nComissão dos vendedores:")
                for vendedor in lista_vendedores:
                    print(f"{vendedor.nome}: {vendedor.comissao}")
            elif escolha == 0:
                print("Até mais!")
                break
            else:
                print("Opção inválida.")

    # Se o usuário for um vendedor
    elif opcao_usuario == 2:
        vendedor = Vendedor("Ana", "ana@example.com", "1988-08-15", "Vendedor", 0.1)
        print(f"\nOlá, {vendedor.nome}!")

        # Opções disponíveis para o vendedor
        while True:
            print("\nOpções disponíveis para vendedor:")
            print("1 - Listar veículos")
            print("2 - Realizar venda")
            print("0 - Sair")

            escolha = int(input("Escolha uma opção: "))

            if escolha == 1:
                listar_veiculos(veiculos)
            elif escolha == 2:
                realizar_venda(veiculos, vendedor)
            elif escolha == 0:
                print("Até mais!")
                break
            else:
                print("Opção inválida.")

    # Se o usuário for um cliente
    elif opcao_usuario == 3:
        cliente = Cliente("Pedro", "pedro@example.com", "1975-03-25", "Engenheiro", "Rua A, 123")
        print(f"\nOlá, {cliente.nome}!")

        # Opções disponíveis para o cliente
        while True:
            print("\nOpções disponíveis para cliente:")
            print("1 - Ver informações de todos os veículos")
            print("2 - Solicitar compra de um veículo")
            print("0 - Sair")

            escolha = int(input("Escolha uma opção: "))

            if escolha == 1:
                listar_veiculos(veiculos)
            elif escolha == 2:
                # Implementar a solicitação de compra de um veículo
                pass
            elif escolha == 0:
                print("Até mais!")
                break
            else:
                print("Opção inválida.")

    else:
        print("Opção inválida.")

if __name__ == "__main__":
    main()