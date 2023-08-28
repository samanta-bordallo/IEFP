//SAMANTA BORDALLO

#include <iostream>

#define PRECOH 5 //macro
#define HORAS 7

using namespace std;

int main(){
	const int minutesPerHour = 60;//defenição de uma constante
	const float PI = 3.14;
	int num=5;
	float num1=5.5,raio=10;
	char letra='a';
	string text="Luis";
	bool boleano=true;	
	cout<<num<<endl;
	printf("Numero %d\n",num); //printf 
	cout<<(int)num1<<endl;
	printf("Numero %d\n",(int)num1);
	cout<<!boleano<<endl;
	printf("Booleano=%d\n",!boleano);
	cout<<"cout minutos trabalhados"<<7*minutesPerHour<<endl;
	cout<<"diametro da circunferencia"<<PI*(raio*raio)<<endl;
	
	cout<<PRECOH*HORAS<<endl;
	printf("Valor=%d",PRECOH*HORAS);
	printf("O caracter letra=%c",letra);
	
}
