// Calculo IMC - IMC=peso/(altura*altura)

#include <iostream>
#include <iomanip>
#include <math.h>

 

using namespace std;

 

int main(void){
    float IMC,altura,peso;
    cout << setprecision(2); //Fixa em duas casas decimais
    cout << setiosflags(ios::right); //Tabulação a partir da direita
    cout << setiosflags(ios::fixed); //Estabelece a apresentação do ponto decimal
    cout<<"Peso?"<<endl;
    cin>>peso;
    cout<<"Altura?"<<endl;
    cin>>altura;
    IMC=peso/pow(altura,2);
    cout << "O seu IMC: "<<IMC<<endl;
}
