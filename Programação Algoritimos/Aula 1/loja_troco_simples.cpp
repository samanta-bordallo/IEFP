/* Samanta Bordallo
-
Loja troco simples*/

#include <iostream>
using namespace std;

int main(void){
	int preco, entregue, troco;
	cout<<"Qual o valor do objeto?"<< endl <<"Resposta: " <<endl;
	cin>>preco;
	cout<<"Qual o valor entregue?"<< endl <<"Resposta: " <<endl;
	cin>>entregue;
	
	if(entregue==preco){
		cout<<"Nao ha troco";
	}
	else if(entregue<preco){
		cout<<"Falta dinheiro";
	}
	else if(entregue>preco){
		troco=entregue-preco;
		cout<<"Seu troco e: "<<troco;
	}	
}

