/* Samanta Bordallo
-
Calculo IMC*/

#include <iostream>
using namespace std;

int main(){
	float IMC, altura=1.7, peso=115;
	IMC=peso/(altura*altura);
	cout<<"imc="<<IMC <<endl;
	
	if(IMC<18.5){
		cout<<"Abaixo do peso!";
	}
	else if(IMC<=24.9){
		cout<<"Peso normal!";
	}
	else if(IMC<=29.9){
		cout<<"Pre-obeso!";
	}
	else if(IMC<=34.9){
		cout<<"Obeso I";
	}
	else if(IMC<=39.9){
		cout<<"Obeso II";
	}
	else{
		cout<<"Obeso III";
	}
	
	
}
