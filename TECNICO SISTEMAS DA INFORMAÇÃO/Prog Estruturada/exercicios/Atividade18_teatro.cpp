#include <iostream>

using namespace std;

int main() {
    const int FILAS = 5;
    const int ASSENTOS_POR_FILA = 10;
    char assentos[FILAS][ASSENTOS_POR_FILA] = {'-'};

    // Inicializar todos os assentos como não reservados
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < ASSENTOS_POR_FILA; ++j) {
            assentos[i][j] = '-';
        }
    }

    // Loop para permitir múltiplas reservas
    while (true) {
        // Exibir o layout do teatro
        cout << "  ";
        for (int i = 1; i <= ASSENTOS_POR_FILA; ++i) {
            cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < FILAS; ++i) {
            cout << char('A' + i) << " ";
            for (int j = 0; j < ASSENTOS_POR_FILA; ++j) {
                cout << assentos[i][j] << " ";
            }
            cout << endl;
        }

        // Solicitar ao usuário que escolha uma fila e um assento
        char fila;
        int numero_assento;
        cout << "Escolha uma fila (A-E) e um número de assento (1-10) para reservar (digite 0 para sair): ";
        cin >> fila >> numero_assento;

        // Verificar se o usuário deseja sair do programa
        if (fila == '0' || numero_assento == 0) {
            break;
        }

        // Converter a fila para um índice de vetor
        int indice_fila = fila - 'A';

        // Verificar se a entrada do usuário é válida
        if (indice_fila < 0 || indice_fila >= FILAS || numero_assento < 1 || numero_assento > ASSENTOS_POR_FILA) {
            cout << "Entrada inválida. Tente novamente.\n";
            continue;
        }

        // Verificar se o assento já está reservado
        if (assentos[indice_fila][numero_assento - 1] == 'X') {
            cout << "O assento selecionado já está reservado. Escolha outro assento.\n";
            continue;
        }

        // Reservar o assento
        assentos[indice_fila][numero_assento - 1] = 'X';
        cout << "Assento reservado com sucesso!\n";
    }

    cout << "Programa encerrado.\n";

    return 0;
}

