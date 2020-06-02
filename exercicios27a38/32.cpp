#include <iostream>

using namespace std ;

int main (){

	string nome;
    float salario_bruto, salario_liquido, desconto;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite seu salario bruto: ";
    cin >> salario_bruto;
    if (salario_bruto <= 800)
    {
        desconto = 0.09;
    }
    else if (salario_bruto > 800 && salario_bruto <= 1500)
    {
        desconto = 0.10;
    }
    else
    {
        desconto = 0.11;
    }
    
    salario_liquido = salario_bruto - (salario_bruto * desconto);
    cout << nome << ", seu salario liquido eh R$" << salario_liquido;

	system ("pause") ;
	return 0 ;
}