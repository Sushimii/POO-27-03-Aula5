
#include <iostream>
using namespace std;

int main() {
    
    //Declaração de varial do tipo int
   int num;
   
   //Tela mostrando uma mensagem para o usuario dar um valor a variavel "num"
   cout << "Digite um numero inteiro positivo: ";
   //Valor sendo atribuido a variavel "num"
   cin >> num;
   
   //Tela mostrando o resultado para o usuario
   cout << "Os primeiros " << num << " numeros pares sao : ";
   
   
   //Condição para variavel 'i' = 2 , 'i' menor igual ao valor da variavel 'num' * 2, ele irá acrescentar 2 a variavel "i"
   for (int i = 2; i<= num*2; i+=2 ){
       //Tela mostrando os valores da variavel 'i' depois dos acrescimos 
       cout << i << " ";
   }
   

    return 0;
}