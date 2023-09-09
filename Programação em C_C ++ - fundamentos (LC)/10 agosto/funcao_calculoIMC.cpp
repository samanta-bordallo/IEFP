#include <iostream>
using namespace std;

// Protótipos das funções
float calc_imc(float peso, float altura);
void desc_imc(float IMC);

int main() {
    float altura, peso, IMC;
    
    cout << "Peso (kg): ";
    cin >> peso;
    cout << "Altura (metros): ";
    cin >> altura;

    // Cálculo do IMC
    IMC = calc_imc(peso, altura);

    cout << "IMC: " << IMC << endl;

    // Descrição do IMC
    desc_imc(IMC);

    return 0;
}

// Função para calcular o IMC
float calc_imc(float peso, float altura) {
    return peso / (altura * altura);
}

// Função para descrever o IMC
void desc_imc(float IMC) {
    if (IMC <= 18.5) {
        cout << "Abaixo do Peso!" << endl;
    } else if (IMC <= 24.9) {
        cout << "Peso normal!" << endl;
    } else if (IMC <= 29.9) {
        cout << "Pré-Obeso" << endl;
    } else if (IMC <= 34.9) {
        cout << "Obeso I" << endl;
    } else if (IMC <= 39.9) {
        cout << "Obeso II" << endl;
    } else {
        cout << "Obesidade Mórbida!" << endl;
    }
}
