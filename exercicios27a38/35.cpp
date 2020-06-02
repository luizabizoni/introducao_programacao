#include <iostream>

using namespace std ;

int main (){

	string nome;
    int codigo_do_cargo, horas_trabalhadas, turno;
    float salario_por_hora, salario_base, comissao, salario_bruto;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite o codigo do seu cargo: ";
    cin >> codigo_do_cargo;
    cout << "\nDigite as horas trabalhadas: ";
    cin >> horas_trabalhadas;
    cout << "\nDigite seu turno: ";
    cin >> turno;

    switch (codigo_do_cargo)
    {
    case 1:
        salario_por_hora = 5;
        break;

    case 2:
        salario_por_hora = 8;
        break;
    
    default:
        break;
    }

    salario_base = horas_trabalhadas * salario_por_hora;

    switch (codigo_do_cargo)
    {
    case 1:
        comissao = 0.03;
        break;

    case 2:
        comissao = 0.04;
        break;

    case 3:
        comissao = 0.05;
        break;
    
    default:
        break;
    }
    
    salario_bruto = salario_base - (salario_base * comissao);
    cout << salario_bruto;

	system ("pause") ;
	return 0 ;
}