
#include <iostream>

using namespace std;

//Função soma com definição das variaveis
int soma (int a, int b){
    //calculo a retornar da função
        return a + b;
    }
//Função subtração  com definição das variaveis  
int sub (int a, int b){
    //calculo a retornar da função
        return a - b;
    }
//Função multiplicaçãocom definição das variaveis
int multi (int a, int b){
    //calculo a retornar da função
        return a * b;
}
//Função divisão com definição das variaveis
int divisao (int a , int b){
    //calculo a retornar da função
    return a / b;
}

//Codigo principal
int main() {
    //Declaração de variaveis do tipo inteiro
    int a , b;
    
    //Tela para o usuario digita um valor para dar para variavel
    cout<< "Digite o primeiro valor: ";
    //Valor sendo inserido na variavel a
    cin >> a;
    
     //Tela para o usuario digita um valor para dar para variavel
    cout << "Digite o segundo valor: ";
    //Valor sendo inserido na variavel a
    cin >> b;
    

    //Tela puxando a função soma usando as variaveis que o usuario digitou e mostrando os resultados
    cout <<"A soma desses numeros é: "<< soma( a, b) << endl;
    //Tela puxando a função subtração usando as variaveis que o usuario digitou e mostrando os resultados
    cout << "A subtração desses numeros é: " << sub(a,b) << endl;
    //Tela puxando a multiplicação soma usando as variaveis que o usuario digitou e mostrando os resultados
    cout << "A multiplicação desses numeros é: "<< multi(a,b)  << endl;
    //Tela puxando a função divisão usando as variaveis que o usuario digitou e mostrando os resultados
    cout << "A divisao desses numeros é: " << divisao(a,b) <<endl;
    
    return 0;
}