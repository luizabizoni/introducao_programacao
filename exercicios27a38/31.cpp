#include <iostream>

using namespace std ;

int main (){

	int horas_trabalhadas, classe, salario_por_hora;
    string nome;
    float salario_bruto, salario_liquido;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite o numero de horas trabalhadas: ";
    cin >> horas_trabalhadas;
    cout << "\nDigite sua classe funcional: ";
    cin >> classe;
    if (classe == 1)
    {
        salario_por_hora = 5;
    }
    else
    {
        salario_por_hora = 9;
    }
    salario_bruto = horas_trabalhadas * salario_por_hora;
    salario_liquido = salario_bruto - ((salario_bruto * 11) / 100);
    cout << nome << ", seu salario liquido eh R$" << salario_liquido;

	system ("pause") ;
	return 0 ;
}