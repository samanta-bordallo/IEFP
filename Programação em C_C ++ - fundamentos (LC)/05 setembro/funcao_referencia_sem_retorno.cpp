#include <iostream>

void divisao(float& d1, float& d2);

int main() {
    float n1, n2;
    float resposta;
    
    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;
    std::cout << "\nDigite o segundo numero: ";
    std::cin >> n2;
    
    divisao(n1, n2); // Chama a funcao passando n1 e n2 por referencia
    
    std::cout << "\nO resultado e " << n1 << std::endl; // n1 foi modificado pela funcao
    return 0;
}

void divisao(float& d1, float& d2) {
    if (d2 != 0) {
        d1 = d1 / d2; // Modifica d1
    } else {
        std::cout << "Erro: divisão por zero!" << std::endl;
    }
}

