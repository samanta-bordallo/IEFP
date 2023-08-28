/*Calculo do IMC
nome do utilizador - string nome
Altura em metros - float altura
peso em kg - float peso
IMC - float IMC
*/
#include <iostream>
using namespace std;

int main() {
    float IMCmedio = 0, IMC[5], altura, peso;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o peso (em kg) da pessoa " << i + 1 << ": ";
        cin >> peso;

        cout << "Digite a altura (em metros) da pessoa " << i + 1 << ": ";
        cin >> altura;

        IMC[i] = peso / (altura * altura);

        cout << "IMC = " << IMC[i] << endl;

        if (IMC[i] <= 18.5) {
            cout << "Abaixo do Peso!" << endl;
        } else if (IMC[i] <= 24.9) {
            cout << "Peso normal!" << endl;
        } else if (IMC[i] <= 29.9) {
            cout << "Pré-Obeso" << endl;
        } else if (IMC[i] <= 34.9) {
            cout << "Obeso I" << endl;
        } else if (IMC[i] <= 39.9) {
            cout << "Obeso II" << endl;
        } else {
            cout << "Obesidade Mórbida!" << endl;
        }
    }

    for (int i = 0; i < 5; i++) {
        IMCmedio += IMC[i];
    }
    IMCmedio /= 5;  // Calcula a media dos IMCs

    cout << "IMC Médio: " << IMCmedio << endl;

    return 0;
}

