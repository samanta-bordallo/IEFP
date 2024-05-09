#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

struct Pessoa {
    string nome;
    float peso;
    float altura;
    float IMC;
};

void preencherDados(Pessoa* pessoa) {
    cout << "Digite o nome da pessoa: ";
    getline(cin, pessoa->nome);
    cout << "Digite o peso da pessoa (em kg): ";
    cin >> pessoa->peso;
    cout << "Digite a altura da pessoa (em metros): ";
    cin >> pessoa->altura;
    cin.ignore(); // Limpa o buffer do teclado
    pessoa->IMC = pessoa->peso / (pessoa->altura * pessoa->altura);
}
void calcularIMC(Pessoa* pessoa) {
    pessoa->IMC = pessoa->peso / (pessoa->altura * pessoa->altura);
}

void mostrarDados(const Pessoa& pessoa) {
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Peso: " << pessoa.peso << " kg" << endl;
    cout << "Altura: " << pessoa.altura << " m" << endl;
    cout << "IMC: " << fixed << setprecision(2) << pessoa.IMC << endl;
}

int main() {
    Pessoa individuo;
    preencherDados(&individuo);
    calcularIMC(&individuo);
    mostrarDados(individuo);
    return 0;
}

