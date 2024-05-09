#include <iostream>
using namespace std;

int main(){
	//programa que pede o nome do utilizador
	//pede o genero
	//cumprimenta o utilizador segundo o genero
	
	string nome;
	char genero;
	cout<<"Qual seu primeiro nome?"<<endl;
	cin>>nome;
	cout<<"Qual seu genero? - f para feminimo - m para masculino"<<endl;
	cin>>genero;
	if(genero=='f'){
		cout<<"Ola, Sra "<<nome<<", seja muito bem vinda!"<<endl;
	}
	else if(genero=='m'){
		cout<<"Ola, Sr "<<nome<<", seja muito bem vindo!"<<endl;
	}
	else{
		cout<<"Opcao invalida!";
	}
	
}
