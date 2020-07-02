#include <iostream>

using namespace std ;

int main (){

    // Determinar o maior e o menor elemento e a média dos elementos de um vetor de 100 posições.
    int vetor[3], maior = 0, menor = 0, soma = 0, media;

    for (int contador = 0; contador < 3; contador++)
    {
        cout << "\nDigite o valor " << contador << ": ";
        cin >> vetor[contador];
        if (vetor[contador] > vetor[contador-1])
        {
            maior = vetor[contador];
        } else if (vetor[contador] < vetor[contador-1])
        {
            menor = vetor[contador];
        } 
        
        soma = soma + vetor[contador];
    }
    media = soma / 3;
    cout << maior << "\n" << menor << "\n" << media;

}