#include <iostream>

using namespace std ;

int main (){

	string nome, resultado;
    int aulas_frequentadas;
    float nota1, nota2, nota3, nota4, nota_final, nota_media;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite o numero de aulas que voce frequentou: ";
    cin >> aulas_frequentadas;
    cout << "\nDigite sua nota na primeira prova: ";
    cin >> nota1;
    cout << "\nDigite sua nota na segunda prova: ";
    cin >> nota2;
    cout << "\nDigite sua nota na terceira prova: ";
    cin >> nota3;
    cout << "\nDigite sua nota na ultima prova: ";
    cin >> nota4;

    nota_final = nota1 + nota2 + nota3 + nota4;
    nota_media = nota_final/4;
    if (aulas_frequentadas >= 160 && nota_final >= 60)
    {
        resultado = "aprovado!";
    }
    else
    {
        resultado = "reprovado.";
    }

    cout << "\nSua nota final foi: " << nota_final;
    cout << "\nSua nota media foi: " << nota_media;
    cout << "\nVoce foi " << resultado;

	system ("pause") ;
	return 0 ;
}