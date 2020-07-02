#include <iostream>

using namespace std ;

int main (){

    // Preencha um vetor com 30 ocorrência de zeros
    int vetor1[30];

    for (int contador = 0; contador < 30; contador++)
    {
        vetor1[contador] = 0;
        cout << vetor1[contador] << " | ";
    }

    // Preencha um vetor com 30 ocorrências, de 1 a 30
    int vetor2[30], valor = 1;
    for (int contador = 0; contador < 30; contador++){
        vetor2[contador] = valor;
        valor++;
        cout << vetor2[contador] << " | ";
    }
}