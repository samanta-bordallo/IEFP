#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
/*	
	compara 3 valores
	pede 3 valores ao utilizador - a, b, c
	compara a com 
	a com b e b com c
	se forem iguais escreve que s�o iguais
	caso contr�rio escreve que s�o diferentes
	verifique se s�o todos diferentes
	comparando a com b e b com c
*/
int main()
{
	int a, b, c;
	cout<<"Me de 3 numeros"<<endl;
	cin>>a>>b>>c;
	
	if(a==b && b==c && c==a){
		cout<<"Os numeros sao iguais"<<endl;
	}
	else if(a==b || b==c || c==a){
		cout<<"Tem numeros repetidos"<<endl;
	}
	else{
		cout<<"Os numeros sao diferentes";
	}
	
}
