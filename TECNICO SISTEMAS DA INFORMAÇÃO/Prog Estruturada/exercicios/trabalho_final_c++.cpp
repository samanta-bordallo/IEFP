#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Livro {
    string titulo;
    string autor;
};

void adicionarLivro(vector<Livro> &biblioteca) {
    Livro novoLivro;
    cout << "Digite o título do livro: ";
    cin >> novoLivro.titulo;
    cout << "Digite o autor do livro: ";
    cin >> novoLivro.autor;
    
    bool encontrado = false;
    for (size_t i = 0; i < biblioteca.size(); ++i) {
        if (biblioteca[i].titulo == novoLivro.titulo) {
            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        biblioteca.push_back(novoLivro);
        cout << "Livro adicionado com sucesso!" << endl;
    } else {
        cout << "Livro já existe na biblioteca." << endl;
    }
}

void removerLivro(vector<Livro> &biblioteca) {
    string titulo;
    cout << "Digite o título do livro a ser removido: ";
    cin >> titulo;
    
    for (size_t i = 0; i < biblioteca.size(); ++i) {
        if (biblioteca[i].titulo == titulo) {
            biblioteca.erase(biblioteca.begin() + i);
            cout << "Livro removido com sucesso!" << endl;
            return;
        }
    }
    
    cout << "Livro não encontrado na biblioteca." << endl;
}

void buscarLivro(vector<Livro> &biblioteca) {
    string titulo;
    cout << "Digite o título do livro a ser buscado: ";
    cin >> titulo;
    
    for (size_t i = 0; i < biblioteca.size(); ++i) {
        if (biblioteca[i].titulo == titulo) {
            cout << "Título: " << biblioteca[i].titulo << endl;
            cout << "Autor: " << biblioteca[i].autor << endl;
            return;
        }
    }
    
    cout << "Livro não encontrado na biblioteca." << endl;
}

void listarLivros(const vector<Livro> &biblioteca) {
    cout << "Lista de Livros:" << endl;
    for (size_t i = 0; i < biblioteca.size(); ++i) {
        cout << "Título: " << biblioteca[i].titulo << ", Autor: " << biblioteca[i].autor << endl;
    }
}

int main() {
    vector<Livro> biblioteca;
    std::cout << "  ___   _   _      _   _         _                            _            ___                    \n";
    std::cout << " | _ ) (_) | |__  | | (_)  ___  | |_   ___   __   __ _     __| |  __ _    / __|  __ _   ___  __ _ \n";
    std::cout << " | _ \\ | | | '_ \\ | | | | / _ \\ |  _| / -_) / _| / _` |   / _` | / _` |   \\__ \\ / _` | (_-< / _` |\n";
    std::cout << " |___/ |_| |_.__/ |_| |_| \\___/  \\__| \\___| \\__| \\__,_|   \\__,_| \\__,_|   |___/ \\__,_| /__/ \\__,_|\n";
    std::cout << "                                                                                                  \n";
    int opcao;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Adicionar Livro" << endl;
        cout << "2. Remover Livro" << endl;
        cout << "3. Buscar Livro" << endl;
        cout << "4. Listar Livros" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                adicionarLivro(biblioteca);
                break;
            case 2:
                removerLivro(biblioteca);
                break;
            case 3:
                buscarLivro(biblioteca);
                break;
            case 4:
                listarLivros(biblioteca);
                break;
            case 5:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 5);
    
    return 0;
}

