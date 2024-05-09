#include <iostream>
using namespace std;

// Protótipo da função
float IMC(float peso, float altura);

int main() {
    float p, a;
    cout << "Peso: ";
    cin >> p;
    cout << "Altura: ";
    cin >> a;
    cout << "Valor do IMC: " << IMC(p, a);
    return 0;
}

// Declaração da função
float IMC(float peso, float altura) {
    return peso / (altura * altura);
}

