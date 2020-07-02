#include <iostream>

using namespace std ;

int main (){

    // Leia um vetor de 50 elementos inteiros
    int vetor[5];

    // Determine o maior elemento desse vetor
    int maior = 0;

    for (int contador = 0; contador < 5; contador++)
    {
        cout << "\nDigite o numero da posicao " << contador+1 << ": ";
        cin >> vetor[contador];

        if (vetor[contador] >= maior) {
           maior = vetor[contador];
        } else {
            maior = maior;
        }
    }
    cout << "\nO maior valor digitado foi: " << maior;    
}