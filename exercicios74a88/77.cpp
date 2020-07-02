#include <iostream>

using namespace std ;

int main (){

    // Leia uma variável de 100 elementos (vetor) alfanuméricos (nomes de cidades)
    // e verifique se existem elementos iguais a BELO HORIZONTE.
    // Se existirem, imprimir as posições que eles estão armazenados.
    string cidades[100]; 
 
    for (int contador = 0; contador < 100; contador++)
    {
        cout << "\nDigite o nome da cidade:";
        cin >> cidades[contador];

        if (cidades[contador] == "belo_horizonte")
        {
            cout << "\n" << contador;
        }
        
    }
        
}