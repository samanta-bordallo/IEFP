/* Samanta Bordallo
-
VALOR ACUMULADO DE 1000 ATE 150*/

#include <iostream>
using namespace std;

int main(){
	int acum=0;
	int i=1000;
	while(i>=150){
		acum=acum+i;
		cout<<i<<endl;
		cout<<"acum "<<acum<<endl;
		i--;
	}
	
}
