#include <iostream>

using namespace std;

int main (){

        // Uma empresa tem os salários dos seus funcionários padronizados por classe:

    // Classe | Salário
    //      1 | 800,00
    //      2 | 1.600,00
    //      3 | 2.000,00
    //      4 | 2.100,00
    //      5 | 2.200,00
    //      6 | 2.500,00
    //      7 | 2.600,00
    //      8 | 2.700,00
    //      9 | 3.000,00
    //     10 | 4.000,00

    // Supondo que a empresa tem 1500 funcionários, faça um algoritmo que leia a CLASSE e o NOME do funcionário e imprima seu nome juntamente com seu salário.

    string nome[1500];
    int classe[1500], salario[10];
    
    salario[0] = 800;
    salario[1] = 1600;
    salario[2] = 2000;
    salario[3] = 2100;
    salario[4] = 2200;
    salario[5] = 2500;
    salario[6] = 2600;
    salario[7] = 2700;
    salario[8] = 3000;
    salario[9] = 4000;

    for (int contador = 0; contador < 1500; contador++)
    {
        cout << "\nDigite seu nome: ";
        cin >> nome[contador];

        cout << "\nDigite sua classe: ";
        cin >> classe[contador];

        cout << "\n\n" << nome << ", seu salario eh: R$" << salario[classe[contador]-1] << ",00.";
    }      
}