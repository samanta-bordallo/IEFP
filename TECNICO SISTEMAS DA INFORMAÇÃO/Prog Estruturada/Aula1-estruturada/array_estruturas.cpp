/*
Esse código define uma struct para um estudante e usa um array 
para armazenar informações sobre uma turma de estudantes, demonstrando 
como estruturas de dados podem ser usadas para organizar informações relacionadas.
*/
#include <iostream>
#include <string>
using namespace std;

struct Estudante {
    string nome;
    int idade;
    float media;
};

int main() {
    Estudante turma[3];
    /*Preenche a estrutura*/
    for (int i = 0; i < 3; i++) {
       /*preencher campo a campo pedindo os dados ao utilizador*/
    	cout << "Introduza o nome do estudante "<< i << ": ";
		cin >> turma[i].nome;
		cout << "Introduza a idade do estudante "<< i << ": ";
		cin >> turma[i].idade;
		cout << "Introduza a media do estudante "<< i << ": ";
		cin >> turma[i].media;
	
	}

    /*Mostra o valor da estrutura*/
    for (int i = 0; i < 3; i++) {
        cout << "Estudante: " << turma[i].nome << " - Idade: " << turma[i].idade << " - Media: " << turma[i].media << endl;
    }

    return 0;
}
