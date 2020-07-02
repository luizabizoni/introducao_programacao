#include <iostream>

using namespace std ;

int main (){

    // a) Leia dois vetores com o mesmo número de elementos (numéricos) de 50 posições.
    int vetor1[50], vetor2[50];

    for (int contador = 0; contador < 50; contador++)
    {
        cout << "\nVETOR 1";
        cout << "\nDigite o valor " << contador << ":";
        cin >> vetor1[contador];
        cout << "\nVETOR 2";
        cout << "\nDigite o valor " << contador << ":";
        cin >> vetor2[contador];
    }
    cout << "\n";

    // b) Calcule e imprima outros dois vetores que são a soma e a diferença (feitas casa por casa) dos dois vetores lidos.
    int vetorSoma[50], vetorDiferenca[50];
    
    for (int contador = 0; contador < 50; contador++)
    {
        vetorSoma[contador] = vetor1[contador] + vetor2[contador];
        cout << vetorSoma[contador] << " | ";
    }
    cout << "\n";

    for (int contador = 0; contador < 50; contador++)
    {
        vetorDiferenca[contador] = vetor1[contador] - vetor2[contador];
        cout << vetorDiferenca[contador] << " | ";
    }
}