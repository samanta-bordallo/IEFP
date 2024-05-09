/*
#include <iostream>
using namespace std;
int main ()
{
	int X = 1, Y=1;
	while (X < Y)
{
		cout << "Valor de X = " << X << endl;
		X = X+1;
}
	cout<<"Acabou o while";
	cout << endl;
	system("Pause");
	return 0;
}
*/

/*
//Ciclo infinito
#include <iostream>
using namespace std;
int main ()
{
	int X = 1, Y=1;
	while (X <= Y)
{
		cout << "Valor de X = " << X << endl;
}
	cout<<"Acabou o while";
	cout << endl;
	system("Pause");
	return 0;
}
*/

/*
//DO - WHILE EXERCICIO 1

#include <iostream>
using namespace std;
int main (){
	int X = 0;
	do{
		cout << "\nValor de X = " << X;
		X = X+1;
	}
	while (X != 5);
		cout << "\nX depois de sair do repetir" << X;
		cout << endl;
		system("Pause");
	return 0;
}
*/


/*
// uso do DO-WHILE 
#include <iostream>
using namespace std;

int main() {
    const int numeroSecreto = 42; // Numero que o usuario deve adivinhar
    int palpite;

    do {
        cout << "Tente adivinhar o numero secreto: ";
        cin >> palpite;

        if (palpite < numeroSecreto) {
            cout << "Dica: Tente um numero maior." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Dica: Tente um numero menor." << endl;
        } else {
            cout << "Parabens! Voce adivinhou o numero correto: " << numeroSecreto << endl;
        }
    } while (palpite != numeroSecreto);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int alturas [5] = {185, 201, 188, 195, 176};
int i, soma=0;
int main (){
	for (i=0; i <=5; i++){
		soma += alturas[i]; // soma = soma + alturas[i]
		cout<<"Alturas ["<<i<<"]"<<alturas[i]<<endl;
	}
	cout << "Soma das alturas = " << soma;
	cout << "\n\n";
	system("Pause");
	return 0;
}
*/

/*
//vetores 
#include <iostream>
using namespace std;

int main(){
	char nome[]={'S','a','m','a','n','t','a'};
	int i;
	for(i=0;i<7;i++){
		cout<<nome[i];
	}	
}
*/


/*
#include <iostream>
using namespace std;
int main(){
	char nome[]={'S','a','m','a','n','t','a'};
	int i;
	for(i=0;i<7;i++){
		for(int j=0;j<i;j++){
			cout<<' ';
		}
		cout<<nome[i]<<endl;
	}	
}

*/


/*
//solicitar nome e mostrar em diagonal

#include <iostream>
using namespace std;

int main() {
    char nome[100];
    cout << "Digite o seu nome: ";
    cin.getline(nome, sizeof(nome));

    int tamanho = 0;
    while (nome[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        cout << nome[i] << endl;
    }

    return 0;
}
*/

/*
//Tranformar o ciclo for num ciclo while que execute a mesma funcao
#include <iostream>
using namespace std;
int main(){
	char nome[]={'S','a','m','a','n','t','a'};
	int i=0;
	while(i<7){
		cout<<nome[i]<<endl;
		i++;
	}
}
*/

/*
#include <iostream>
//transformar o ciclo for num ciclo while que execute a mesma função
using namespace std;

int main(){
	char nome[13]={'L','u','i','s',' ','C','a','r','d','o','s','o','\0'};
	int i=0;
	while(i<12){
		cout<<nome[i]<<endl;
		i++;
	}
}
*/

#include <iostream>
using namespace std;
int IMC [5] = {185, 201, 188, 195, 176};
int i, soma=0;
int main (){
	for (i=0; i <=5; i++){
		soma +=IMC[i]; // soma = soma + alturas[i]
		cout<<"Alturas ["<<i<<"]"<<alturas[i]<<endl;
	}
	cout << "Soma das alturas = " << soma;
	cout << "\n\n";
	system("Pause");
	return 0;
}



