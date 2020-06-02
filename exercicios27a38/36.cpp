#include <iostream>

using namespace std ;

int main (){

	string nome;
    int numero_de_filhos, mensalidade;
    float desconto;
    cout << "\nDigite o nome do responsavel: ";
    cin >> nome;
    cout << "\nDigite o numero de filhos: ";
    cin >> numero_de_filhos;
    mensalidade = 120;

    if (numero_de_filhos == 1)
    {
        desconto = 0.10;
    }
    else if (numero_de_filhos >= 2 && numero_de_filhos <= 3)
    {
        desconto = 0.15;
    }
    else
    {
        desconto = 0.20;
    }
    mensalidade = mensalidade * numero_de_filhos;
    cout << "\nValor a pagar: " << mensalidade - (mensalidade * desconto);

	system ("pause") ;
	return 0 ;
}