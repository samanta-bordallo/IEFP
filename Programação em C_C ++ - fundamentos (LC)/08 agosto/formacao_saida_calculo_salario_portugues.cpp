// salario=horas*precohora
//dia=8h
//desconto=salario*percentagemsegsocial
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void){
	int dias, horas;
	float salario, salariol, desconto, percsegsocial=0.11,precohora=4.35;
	float subref=5, subdesl=6, subsidio;
	cout<<"Trabalhastes quantos dias? "<<endl; cin>>dias;
	subsidio=dias*subdesl+dias*subref;
	//conversao de dias em horas
	horas=dias*8;
	salario=horas*precohora;
	desconto=salario*percsegsocial;
	salariol=salario-desconto+subsidio;
	
	cout << fixed << setprecision(2); // Configurar a saída para números com duas casas decimais
	
	cout<<"Salario bruto:   "<<setw(10)<<salario<<endl;
	cout<<"Subsidios:       "<<setw(10)<<subsidio<<endl;
	cout<<"Descontos:       "<<setw(10)<<desconto<<endl;
	cout<<"Salario liquido: "<<setw(10)<<salariol<<endl;
	
}
