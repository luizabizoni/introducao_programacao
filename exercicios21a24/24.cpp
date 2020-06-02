#include <iostream>

using namespace std ;

int main (){

	float saldo_atual, primeira_retirada, segunda_retirada, deposito, retiradas;
    cout << "\nDigite seu saldo atual: ";
    cin >> saldo_atual;
    cout << "\nDigite o valor da primeira retirada: ";
    cin >> primeira_retirada;
    cout << "\nDigite o valor da segunda retirada: ";
    cin >> segunda_retirada;
    cout << "\nDigite o valor do deposito: ";
    cin >> deposito;
    cout << "\nSeu saldo era de R$" << saldo_atual;
    retiradas = primeira_retirada + segunda_retirada;
    cout << "\nO total das retiradas foi de R$" << retiradas;
    cout << "\nO total de depositos foi de R$" << deposito;
    cout << "\nSaldo final: R$" << (saldo_atual + deposito) - retiradas << "\n";

	system ("pause") ;
	return 0 ;
}