#include <iostream>

using namespace std ;

int main (){

	string nome;
    int turno;
    float salario;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite seu turno: ";
    cin >> turno;
    switch (turno)
    {
    case 1:
        salario = 450;
        break;

    case 2:
        salario = 490;
        break;
    
    case 3:
        salario = 650;

    default:
        break;
    }
    cout << nome << ", seu salario eh R$" << salario << ",00";

	system ("pause") ;
	return 0 ;
}