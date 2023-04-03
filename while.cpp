
#include <iostream>
using namespace std;

int main() {
    
    //Declaração de variaveis do tipo inteiro
    int num, i =1;
    
    //Tela para o usuario digitar um valor que vai ser atribuido a uma variavel
    cout<< "Digite um numero inteiro positivo:  ";
    //Valor sendo atribuido a variavel "num"
    cin >> num;
    
    
    //Condição enquanto a variavel 'num' for maior igual a variavel "i" que tem valor atribuido de 1
    while (i<= num){
        //Tela que será mostrada caso a condição seja cumprida
        cout << i << " ";
        //Operador de incremento, somando 1 ao valor da variavel
        i++;
    }
   

    return 0;
}