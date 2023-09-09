#include <iostream>
#include "locale.h"
#include <string>

using namespace std;

void cumprimenta_utilizador(string nome, char genero);

int main() {
    setlocale(LC_ALL, "Portuguese");
    string nome;
    char genero;

    cout << "Qual o seu nome? ";
    getline(cin, nome);
    cout << "Qual o seu genero (M/F)? ";
    cin >> genero;

    cumprimenta_utilizador(nome, genero);

    return 0;
}

void cumprimenta_utilizador(string nome, char genero) {
    switch (genero) {
        case 'm':
        case 'M':
            cout << "Bem-vindo " << nome << endl;
            break;
        case 'f':
        case 'F':
            cout << "Bem-vinda " << nome << endl;
            break;
        default:
            cout << "Genero Indefinido" << endl;
    }
}

