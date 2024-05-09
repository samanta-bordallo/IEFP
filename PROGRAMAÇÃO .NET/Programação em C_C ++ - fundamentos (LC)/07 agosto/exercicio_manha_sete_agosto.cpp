#include <iostream>
using namespace std;

int main(){
	char nome[50],sobrenome[20];
	cout<<"Informe seu nome: ";
	cin.getline(nome,sizeof(nome));
	cout<<"Informe seu sobrenome: ";
	cin.getline(sobrenome,sizeof(sobrenome));
	cout<<"Ola, "<<nome<<" "<<sobrenome;
	
	
}
