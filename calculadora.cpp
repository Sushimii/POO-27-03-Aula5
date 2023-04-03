

#include <iostream>

using namespace std;

int main() {
    //Declaração de variavel do tipo caracter
    char op;

    //Declaração de 2 variaveis do tipo float
    float num1, num2;
    //Declaração de variavel do tipo string
    string cont;
    
    //Operação de condição
    do{
    
        //Tela para o usuario digitar um valor que vai ser atribuido a variavel "op"
        cout << "ENTRE COM O OPERADOR: +, -, *, /: ";
        //Valor sendo atribuido a variavel "op"
        cin >> op;
        
        //Tela para o usuario adicionar um valor a variavel "num1"
        cout << "ENTRE COM  O PRIMEIRO VALOR: ";
        //Valores sendo atribuidos a variaveL "num1" 
        cin >> num1 ;
        
        //Tela para o usuario adicionar um valor a variavel "num2"
        cout<< "ENTRE COM O SEGUNDO VALOR: ";
        //Valores sendo atribuidos a variaveL "num2"
        cin >> num2;
        
            //Condicional switch para diferentes expressões
            switch(op){
                
                
                    
                
                //Condição se o caracter '+' for escolhido
                case '+':
                //Tela e a formula que ira ser mostrada e executada caso a condição seja cumprida
                cout << num1 << "+" << num2 << "=" << num1 + num2<< endl;
              
                //Pausa no codigo
                break;
                
                //Condição se o caracter '-' for escolhido
                case '-':
                //Tela e a formula que ira ser mostrada e executada caso a condição seja cumprida
                cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
                //Pausa no codigo
                break;
                
                //Condição se o caracter '*' for escolhido
                case '*':
                //Tela e a formula que ira ser mostrada e executada caso a condição seja cumprida
                cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
                //Pausa no codigo
                break;
                
                //Condição se o caracter '/' for escolhido
                case '/':
                //Tela e a formula que ira ser mostrada e executada caso a condição seja cumprida
                cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
                //Pausa no codigo
                break;
                
                default:
                //Tela e a formula que ira ser mostrada e executada caso a condição seja cumprida
                cout << "OPERADOR ERRADO, POR FAVOR INSIRA O OPERADOR CORRETO" << endl; 
                //Pausa no codigo
                break;
            
            } 
        //Tela para o usuario adicionar um valor a variavel "cont"
        cout << "Quer continuar (S/N) ? ";
        //Valor sendo atribuido a variavel "cont"
        cin >> cont;
    
    //Condição para o programa continuar 
    }while (cont == "S" || cont== "s");
    //Mensagem que ira aparecer caso a condição não seja cumprida encerrando o programa
    cout << "OBRIGADO VOLTE SEMPRE :)";
    
    
    return 0;
}