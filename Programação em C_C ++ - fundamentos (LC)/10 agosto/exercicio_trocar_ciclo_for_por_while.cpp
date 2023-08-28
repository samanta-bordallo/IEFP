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

