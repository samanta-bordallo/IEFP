// Calculo IMC - IMC=peso/(altura*altura)

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
	float IMC, altura, peso;
	cout<<"Qual sua altura? "<<endl; cin>>altura;
	cout<<"Qual seu peso? "<<endl; cin>>peso;
	IMC=peso/pow(altura,2);
	cout<<"Seu IMC e: "<<IMC;
	

}
