#include <iostream>
#include <limits>

int main() {
    int numero;
    int maximo = std::numeric_limits<int>::min();
    int minimo = std::numeric_limits<int>::max();

    std::cout << "Insira os números (digite 0 para sair):" << std::endl;

    while (true) {
        std::cout << "Insira um número: ";
        std::cin >> numero;

        if (numero == 0) {
            break;
        }

        if (numero > maximo) {
            maximo = numero;
        }

        if (numero < minimo) {
            minimo = numero;
        }
    }

    if (maximo == std::numeric_limits<int>::min() || minimo == std::numeric_limits<int>::max()) {
        std::cout << "Nenhum número foi inserido." << std::endl;
    } else {
        std::cout << "Máximo: " << maximo << std::endl;
        std::cout << "Mínimo: " << minimo << std::endl;
    }

    return 0;
}

