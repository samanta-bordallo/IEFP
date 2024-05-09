#include <iostream>
using namespace std;
/*
vota se > 18
*/
int main()
{
	int idade;
	cout<<"Qual sua idade? "; cin>>idade;
	if(idade<18){
		cout<<"Nao vota";
	}
	else if(idade>=18 && idade<=100){
		cout<<"Pode votar";
	}
	
}
