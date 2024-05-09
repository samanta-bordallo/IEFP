#include <iostream>
using namespace std;

int main() {
	int soma = 0;
	int i = 1;
	
	while (i <=100) {
		if (i%2!=0) {
			soma += i;
		}
		i++;
		
	}
	cout << "A soma dos numeros impares entre 1 e 100 e:" << soma<< endl;
	return 0;
	
}
