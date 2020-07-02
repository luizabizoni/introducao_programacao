#include <iostream>

using namespace std ;

int main (){

    // Dada a tabela 10 / 20 / 30 / 40 / 50, 
    int tabela[5];

    tabela[0] = 10;
    tabela[1] = 20;
    tabela[2] = 30;
    tabela[3] = 40;
    tabela[4] = 50;

    // imprima a soma total dos valores
    int soma = 0, media, valores;
    for (int contador = 0; contador < 5; contador++)
    {
        soma = soma + tabela[contador];
        valores = contador+1;
    }
    cout << soma;

     // imprima a média dos valores
    media = soma / valores;
    cout << "\n" << media;
    
}