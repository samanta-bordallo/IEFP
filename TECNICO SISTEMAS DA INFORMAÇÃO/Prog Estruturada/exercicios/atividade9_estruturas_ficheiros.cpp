#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct dados_escrever {
    string nome;
    int idade;
    string email;
    string endereco;
};

int main() {
    dados_escrever dados_pessoais;
    dados_pessoais.nome = "Celaena Sardothien";
    dados_pessoais.idade = 18;
    dados_pessoais.email = "celaena.sardothien@gmail.com";
    dados_pessoais.endereco = "Leiria, Portugal";

    ofstream arquivo_saida("dados.txt");
    if (arquivo_saida.is_open()) {
        arquivo_saida << dados_pessoais.nome << "\n";
        arquivo_saida << dados_pessoais.idade << "\n";
        arquivo_saida << dados_pessoais.email << "\n";
        arquivo_saida << dados_pessoais.endereco << "\n";
        arquivo_saida.close();
    } else {
        cerr << "Não foi possível abrir o arquivo para escrita." << endl;
        return 1; 
    }

    ifstream arquivo_entrada("dados.txt");
    if (arquivo_entrada.is_open()) {
        dados_escrever dados_ler;
        getline(arquivo_entrada, dados_ler.nome);
        arquivo_entrada >> dados_ler.idade;
        arquivo_entrada.ignore();
        getline(arquivo_entrada, dados_ler.email);
        getline(arquivo_entrada, dados_ler.endereco);

        cout << "Dados lidos do arquivo:" << endl;
        cout << "Nome: " << dados_ler.nome << endl;
        cout << "Idade: " << dados_ler.idade << " anos" << endl;
        cout << "Email: " << dados_ler.email << endl;
        cout << "Endereço: " << dados_ler.endereco << endl;

        arquivo_entrada.close();
    } else {
        cerr << "Não foi possível abrir o arquivo para leitura." << endl;
        return 1; 
    }

    return 0;
}

