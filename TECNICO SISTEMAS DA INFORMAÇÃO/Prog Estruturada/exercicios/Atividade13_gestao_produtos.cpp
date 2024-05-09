#include <iostream>
#include <vector>
#include <string>

// Estrutura para representar um produto
struct Produto {
    int id;
    std::string descricao;
    int quantidade;
};

// Função para inserir um produto na loja
void inserirProduto(std::vector<Produto>& loja, int id, const std::string& descricao, int quantidade) {
    Produto novoProduto = {id, descricao, quantidade};
    loja.push_back(novoProduto);
}

// Função para atualizar um produto na loja
void atualizarProduto(std::vector<Produto>& loja, int id, const std::string& novaDescricao, int novaQuantidade) {
    for (size_t i = 0; i < loja.size(); ++i) {
        if (loja[i].id == id) {
            loja[i].descricao = novaDescricao;
            loja[i].quantidade = novaQuantidade;
            return;
        }
    }
    std::cout << "Produto com ID " << id << " não encontrado." << std::endl;
}

// Função para listar todos os produtos da loja
void listarProdutos(const std::vector<Produto>& loja) {
    std::cout << "Lista de produtos:" << std::endl;
    for (std::vector<Produto>::const_iterator it = loja.begin(); it != loja.end(); ++it) {
        const Produto& produto = *it;
        std::cout << "ID: " << produto.id << ", Descrição: " << produto.descricao << ", Quantidade: " << produto.quantidade << std::endl;
    }
}

// Função para remover um produto da loja
void removerProduto(std::vector<Produto>& loja, int id) {
    for (std::vector<Produto>::iterator it = loja.begin(); it != loja.end(); ++it) {
        if (it->id == id) {
            it = loja.erase(it);
            std::cout << "Produto removido com sucesso." << std::endl;
            return;
        }
    }
    std::cout << "Produto com ID " << id << " não encontrado." << std::endl;
}

int main() {
    std::vector<Produto> loja;

    char opcao;
    do {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Inserir Produto" << std::endl;
        std::cout << "2. Atualizar Produto" << std::endl;
        std::cout << "3. Listar Produtos" << std::endl;
        std::cout << "4. Remover Produto" << std::endl;
        std::cout << "5. Sair" << std::endl;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case '1': {
                int id, quantidade;
                std::string descricao;
                std::cout << "Digite o ID do produto: ";
                std::cin >> id;
                std::cout << "Digite a descrição do produto: ";
                std::cin >> descricao;
                std::cout << "Digite a quantidade do produto: ";
                std::cin >> quantidade;
                inserirProduto(loja, id, descricao, quantidade);
                break;
            }
            case '2': {
                int id, quantidade;
                std::string novaDescricao;
                std::cout << "Digite o ID do produto que deseja atualizar: ";
                std::cin >> id;
                std::cout << "Digite a nova descrição do produto: ";
                std::cin >> novaDescricao;
                std::cout << "Digite a nova quantidade do produto: ";
                std::cin >> quantidade;
                atualizarProduto(loja, id, novaDescricao, quantidade);
                break;
            }
            case '3':
                listarProdutos(loja);
                break;
            case '4': {
                int id;
                std::cout << "Digite o ID do produto que deseja remover: ";
                std::cin >> id;
                removerProduto(loja, id);
                break;
            }
            case '5':
                std::cout << "Encerrando o programa." << std::endl;
                break;
            default:
                std::cout << "Opção inválida. Por favor, escolha uma opção válida." << std::endl;
        }
    } while (opcao != '5');

    return 0;
}

