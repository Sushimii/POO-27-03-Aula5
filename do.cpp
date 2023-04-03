
#include <iostream>
using namespace std;

int main() {
    
    //Declaração de variavel do tipo int
    int num;
    
    //Condição faça algo
    do{
        //Tela para o usuario digitar um valor que sera atribuido a variavel "num"
        cout << "Digite um numero entre 1 e 10: ";
        //Valor sendo atribuido a variavel "num"
        cin >> num;
        
    //Condicional enquanto a variavel "num" possuir valor menor que 1 ou valor maior que 10
    }while (num < 1 || num  > 10);
    
    //Tela que será mostrada ao usuario caso a condição for cumprida
    cout<<"Voce digitou o numero " << num << ".";
   

    return 0;
}