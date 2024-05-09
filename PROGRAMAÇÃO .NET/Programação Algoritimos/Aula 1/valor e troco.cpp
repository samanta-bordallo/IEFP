/* Samanta Bordallo
-
Calculo IMC*/

#include <iostream>
using namespace std;

int main(){
	string nome;
	int preco, valor_entregue, troco;
	
	cout<<"Qual o valor do objeto? ";
	cin>>preco;
	cout<<"Qual o valor entregue? ";
	cin>>valor_entregue;
	if(preco<valor_entregue){
		troco=valor_entregue-preco;
		cout<<"Seu troco e: "<<troco;
	}
	else
		cout<<"Falta dinheiro";
		
	
}

