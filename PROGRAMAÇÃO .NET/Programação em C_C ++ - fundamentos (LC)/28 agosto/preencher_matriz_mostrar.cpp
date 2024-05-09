#include <iostream>
using namespace std;

int main()
{
    float nota[2][3];

    // Preenchendo a matriz soma
    cout << "Matriz soma: " << endl;
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            cout << "Digite o valor para a posição [" << i << "][" << j << "]: ";
            cin >> nota[i][j]; // Lendo valor do usuário
        }
    }

    cout << endl;

    // Impressão da matriz nota
    cout << "Matriz nota: " << endl;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 2; j++) {
            cout << nota[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}

