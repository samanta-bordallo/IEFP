#include <iostream>
using namespace std;

int main(){
	const int max_notas = 100;
	int quantNotas;
	int notas[max_notas];
	cout << "Quantas notas ira inserir?: " << endl;
	cin >> quantNotas;
	cout << "Insira as notas: " << endl;
	
	double soma_notas = 0.0;
	for (int i = 0; i < quantNotas; ++i){
		cout <<  "Nota " << i + 1 << ": ";
		cin >> notas[i];
		soma_notas += notas[i];
	}
	
	double media = soma_notas / quantNotas;
	cout << "A media das notas e: " << media << endl;
	
}
