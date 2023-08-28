#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
/*	
	Peca ao utilizador 3 notas
	Guarde em 3 variaveis, por exempro nota1, nota2, nota3
	Calcule a media sabendo a formula 
	Média=(soma notas)/(numero notas)
	Imprima o resultado;
	Consoante a media for superior a 9.5 escreva aprovado. 
	Caso contrario escreva reprovado.
*/
int main()
{
	float not1, not2, not3;
	float result;
	cout<<"Me diga suas 3 notas"<<endl;
	cin>>not1>>not2>>not3;
	cout << fixed << setprecision(1);
	result=(not1+not2+not3)/3;
	cout<<"Sua media e: "<<result<<endl;
	
	if(result>9.5){
		cout<<"Voce esta aprovado";
	}
	else{
		cout<<"Voce esta reprovado";
	}
	
}
