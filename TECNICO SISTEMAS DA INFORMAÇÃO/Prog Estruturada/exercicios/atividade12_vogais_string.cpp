#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string frase;
    std::cout << "Insira uma frase (digite '.' para sair): ";

    while (true) {
        std::getline(std::cin, frase);
        if (frase == ".") {
            break;
        }

        int vogais = 0, consoantes = 0;

        for (size_t i = 0; i < frase.length(); ++i) {
            char ch = std::tolower(frase[i]);
            if (std::isalpha(ch)) {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    ++vogais;
                } else {
                    ++consoantes;
                }
            }
        }

        std::cout << "Vogais: " << vogais << ", Consoantes: " << consoantes << std::endl;
    }

    return 0;
}

