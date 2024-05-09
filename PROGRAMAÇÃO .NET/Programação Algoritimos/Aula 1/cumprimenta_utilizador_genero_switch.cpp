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
	cout<<"Qual o seu nome? "<<endl<<endl;
	getline(cin,nome);
	cout<<"Qual o seu genero?"<<endl<<endl;
	cin>>genero;
	switch(genero){
		case 'm':
		case 'M':
			cout<<"Bem vindo, "<<nome;
			break;
		case 'f':
		case 'F':
			cout<<"Bem vinda, "<<nome;
			break;
		default:
			cout<<"Genero indefinido";	
	}


}
