#include <iostream>
#include<cmath>

using namespace std ;

int main (){

    // a) Crie um vetor de tamanho 10 
    int vetor[10];

    // b) Preencha cada posição do vetor com zero;
    for (int contador = 0; contador < 10; contador++)
    {
        vetor[contador] = 0;
        cout << vetor[contador] << " | ";
    }
    cout << "\n";

    // c) Preencha cada posição do vetor com um número que seja igual
    // ao quadrado do índice dessa posição (por exemplo, o terceiro elemento
    // seria 9, pois 9 é o quadrado do índice da 3a. posição).
    for (int contador = 0; contador < 10; contador++)
    {
        int numero = pow(contador, 2);
        vetor[contador] = numero;
        cout << vetor[contador] << " | ";
    }
    cout << "\n";

    // d) Imprima os elementos do vetor que têm índice par.
    for (int contador = 0; contador < 10; contador = contador + 2)
    {
        int numero = pow(contador, 2);
        vetor[contador] = numero;
        cout << vetor[contador] << " | ";
    }
}