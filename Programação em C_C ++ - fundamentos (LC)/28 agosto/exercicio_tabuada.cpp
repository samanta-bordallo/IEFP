#include <iostream>
using namespace std;

int main(){
	//contruir a tabuada do valor pedido pelo utilizador
	//utilizar primeiro o for
	//usar de seguida o while
	
	int num, i;
	cout<<"Me de um numero para fazer sua tabuada: "<<endl;
	cin>>num;
	
	for(i=1; i<=10; i++){
		cout << '\n'<<num<< "x"<< i << "= " << (i*num);
	}
	cout<<endl<<endl<<endl;
	
	i=1;
	while(i<=10){
		cout<<num<<'*'<<i<<'='<<num*i<<endl;
		i++;
	}
	
}
