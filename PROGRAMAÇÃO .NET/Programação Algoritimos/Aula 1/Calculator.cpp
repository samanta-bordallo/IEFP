/* Samanta Bordallo
-
Calculadora*/


#include <iostream>
using namespace std;

int main(){
	float v1, v2;
	char op;
	cout<<"1valor";
	cin>>v1;
	cout<<"2valor";
	cin>>v2;
	cout<<"Op";
	cin>>op;
	switch(op){
		case '+':
			cout<<"v1+v2 = "<<v1+v2<<endl;
			break;
		case '-':
			cout<<"v1-v2 = "<<v1-v2<<endl;
			break;
		case '*':
			cout<<"v1*v2 = "<<v1*v2<<endl;
			break;
		case'/':
			cout<<"v1/v2 = "<<v1/v2<<endl;
			break;
		default:
			cout<<"Operador Invalido!";
	}
	
	
	
	

	
	
}


