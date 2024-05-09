/* Samanta Bordallo ide
-
Tabela idade*/

#include <iostream> //inclui bibliotecas
#include "locale.h" // biblioteca de codificacoes
#include <string> // para usar especificacoes especificas

using namespace std;

int main(){
	int idade;
	cout<<"Qual a sua idade? ";
	cin>>idade;
	if(idade<25){
		cout<<"Jovem";
	}	
	else if(idade<60){
		cout<<"Adulto";
	}
	else{
		cout<<"Senior";
	}
	
	
}
