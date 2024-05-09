#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    int numeroDePaginas;
};

int main() {
    Livro biblioteca[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Digite o título do livro " << i + 1 << ": ";
        getline(cin, biblioteca[i].titulo);

        cout << "Digite o número de páginas do livro " << i + 1 << ": ";
        cin >> biblioteca[i].numeroDePaginas;
        cin.ignore();
    }

    for (int i = 0; i < 3; ++i) {
        cout << "Livro: " << biblioteca[i].titulo << endl;
        cout << "Número de Páginas: " << biblioteca[i].numeroDePaginas << endl;
        cout << endl;
    }

    return 0;
}
