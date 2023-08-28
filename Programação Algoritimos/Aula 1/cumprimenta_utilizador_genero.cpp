/* Samanta Bordallo ide
-
Tabela ASCII*/

#include <iostream> //inclui bibliotecas
#include "locale.h" // biblioteca de codificacoes
#include <string> // para usar especificacoes especificas

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string nome;
	char genero;
	cout<<"Qual o seu nome? ";
	//cin>>nome;
	getline(cin,nome);
	cout<<"Qual o seu genero?";
	cin>>genero;
	//cout<<"Ola, "<<nome;
	if(genero=='m'||genero=='M'){
		cout<<"Bem vindo, "<<nome;
	}
	else if(genero=='f'||genero=='F'){
		cout<<"Bem vinda, "<<nome;
	}
	else {
		cout<<"Ola, "<<nome;
	}
}
