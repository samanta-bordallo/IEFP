/* Samanta Bordallo
-
Loja troco simples*/

#include <iostream>
using namespace std;

int main(){
	int acum=0;
	for(int i=0;i<100;i++){
		cout<<i<<endl;
		acum=acum+i;
		cout<<acum<<endl;
		if(acum>700){
			break;
		}
	}
	
}
