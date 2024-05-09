// Samanta Bordallo
//Adivinha numeros
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

 

using namespace std;

 

int main(){ //inicia a funcao principal da linguaem
    int ncomp=0,njog=0; //define e inicia duas variaveis   
    int ncompacum=0, njogacum=0; //define e inicia mais duas variaveis
    for(int i=0;i<10;i++){ //inicia um loop para determinar a contagem de tentativas, nesse caso, 9 tentativas
        cout<<"introduza o seu numero"<<endl; //input para solitar um numero para o jogador
        cin>>njog; // cin faz o input anterior ser jogado dentro da variavel
        srand(time(0));//time devolve um valor que influencia o srand
        ncomp=rand()%100+1;//rand()%3-0-a-2 com +1 1-a-3
        cout<<ncomp<<endl; //so faz mostrar o valor que foi recebido em ncomp pelo rand 
        if(njog>ncomp){ // inicia os if para comparacoes
            njogacum++; //soma 1
            cout<<endl<<"Ganhou Jogador"; //um print da frase
        }
        else if(njog<ncomp){
            ncompacum++; //soma 1
            cout<<endl<<"Ganhou computador"; //um print da frase
        }
        else{
            ncompacum++;
            njogacum++; //soma 1
            cout<<endl<<"empataram"; //um print da frase
        }

    }
    if(ncompacum>njogacum){ // inicia os if para comparacoes
        cout<<endl<<"computador ganha"; //um print da frase
    }
    else if(ncompacum<njogacum){
        cout<<endl<<"jogador ganha"; //um print da frase
    }
    else{
        cout<<endl<<"empataram"; //um print da frase
    }
}
