//estudante
#include<iostream>
#include<vector>
#include <string>
 
// Definindo uma struct para representar um estudante
struct Estudante{
    std::string nome;
    int idade;
 
    Estudante(std::string nome, int idade) : nome(nome), idade(idade) {}
};
 
// Função para adicionar um estudante ao vetor
void adicionarEstudante(std::vector<Estudante>& estudantes, const std::string& nome, int idade) {
    estudantes.push_back(Estudante(nome, idade));
    std::cout << "Estudante " << nome << " adicionado." << std::endl;
}
 
// Função para listar todos os estudantes
void listarEstudantes(const std::vector<Estudante>& estudantes) {
    std::cout << "Lista de Estudantes:" << std::endl;
    for (const auto& e : estudantes) {
        std::cout << "Nome: " << e.nome << ", Idade: " << e.idade << std::endl;
    }
}
//remover elementos da estrutura estudantes criada na função main
void removerEstudantes(std::vector<Estudante>& estudantes){
    estudantes.clear();
 
}
 
void removerEstudante(std::vector<Estudante>& estudantes, const std::string& nome) {
    for (auto it = estudantes.begin(); it != estudantes.end(); ++it) {
        if (it->nome == nome) {
            estudantes.erase(it);
            std::cout << "Estudante " << nome << " removido." << std::endl;
            return;
        }
    }
    std::cout << "Estudante não encontrado." << std::endl;
}
/*
A função removerEstudante itera sobre o vetor de estudantes usando um iterador.
Se o nome do estudante atual corresponder ao nome fornecido, o estudante é removido usando o método erase, que aceita o iterador do elemento a ser removido.
Após a remoção, a função imprime uma mensagem de confirmação e retorna imediatamente para evitar a continuação da iteração sobre um vetor modificado.
Se o estudante não for encontrado, uma mensagem é exibida informando que o estudante não foi encontrado.
Essa função garante que apenas o primeiro estudante encontrado com o nome correspondente seja removido. Se houver múltiplos estudantes com o mesmo nome e você desejar remover todos, seria necessário um loop diferente ou chamar a função removerEstudante várias vezes até que "Estudante não encontrado" seja exibido.
*/
void atualizarEstudante(std::vector<Estudante>& estudantes, const std::string& nomeOriginal, const std::string& nomeNovo, int idadeNova) {
    for (auto& e : estudantes) {
        if (e.nome == nomeOriginal) {
            e.nome = nomeNovo;
            e.idade = idadeNova;
            std::cout << "Estudante atualizado para " << nomeNovo << " com idade " << idadeNova << "." << std::endl;
            return;
        }
    }
    std::cout << "Estudante " << nomeOriginal << " não encontrado." << std::endl;
}
/*
A função atualizarEstudante recebe o vetor de estudantes, o nome original do estudante a ser atualizado, o novo nome e a nova idade.
A função itera pelo vetor de estudantes usando um loop for e, se encontra o estudante com o nome correspondente, atualiza o nome e a idade do estudante.
Se o estudante for encontrado e atualizado, uma mensagem de confirmação é exibida. Caso contrário, uma mensagem indicando que o estudante não foi encontrado é mostrada.
No main, após adicionar e listar os estudantes, a função atualizarEstudante é chamada para atualizar os dados de "Alice" para "Alicia" e a idade para 22, seguido pela listagem atualizada dos estudantes.
*/
 
int main(){
std::vector<Estudante> estudantes;
int op;
int idade;
std::string nome;
//menu
std::cout << "escolha uma das seguintes opções"<<std::endl;
std::cout << "1-Adicionar"<<std::endl;
std::cout << "2-Listar"<<std::endl;
std::cout << "3-Remover Estudante"<<std::endl;
std::cout << "4-Atualizar Estudante"<<std::endl;
std::cin >> op;
switch(op){
    case 1:
        std::cout << "Introduza o nome e a idade do/a estudante"<<std::endl;
        std::cout << "idade 0 para terminar"<<std::endl;
        do{
            std::cout<<"nome: ";
            std::cin>>nome;
            std::cout<<"idade: ";
            std::cin>>idade;
            if (idade!=0){
                adicionarEstudante(estudantes,nome,idade);
            }
        }while(idade!=0);
        listarEstudantes(estudantes);
    break;
 
}
 
/*adicionarEstudante(estudantes,"Luis",50);
adicionarEstudante(estudantes,"Pedro",48);
adicionarEstudante(estudantes,"Lucia",49);
//listarEstudantes(estudantes);
//removerEstudantes(estudantes);
//estudantes.clear();
listarEstudantes(estudantes);
removerEstudante(estudantes,"Luis");
listarEstudantes(estudantes);
atualizarEstudante(estudantes,"Pedro","Filipe",47);
listarEstudantes(estudantes);
*/
}
 
