#include <iostream>

using namespace std ;

int main (){

	/*Como no Brasil digitamos decimais com "," e não com ".",
    inseri salário como string ao invés de float.*/
    string nome, sexo, salario; 
    int idade;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite sua idade: ";
    cin >> idade;
    cout << "\nDigite seu salario: ";
    cin >> salario;
    cout << "\nDigite seu sexo (utilize M para masculino e F para feminino): ";
    cin >> sexo;
    
    if (sexo == "M" || sexo == "m")
    {
        cout << nome << ", voce tem " << idade << " anos.";
    }
    else if (sexo == "F" || sexo == "f")
    {
        cout << nome << ", seu salario eh R$" << salario;
    }
    else
    {
        cout << nome << ", voce digitou um valor invalido para o campo sexo";
    }

	system ("pause") ;
	return 0 ;
}