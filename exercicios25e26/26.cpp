#include <iostream>
#include <math.h>

using namespace std ;

int main (){

	int numero1, numero2;
    cout << "\nEscreva dois numero inteiros" << "\nPrimeiro numero: ";
    cin >> numero1;
    cout << "\nSegundo numero: ";
    cin >> numero2;
    cout << "\nSoma dos numeros: " << numero1 + numero2;
	cout << "\nSubtracao dos numeros: " << numero1 - numero2;
	cout << "\nMultiplicacao dos numeros: " << numero1 * numero2;
	cout << "\nQuociente inteiro da divisao: " << numero1 / numero2;
	cout << "\nResto da divisao: " << numero1 % numero2;
	cout << "\nResultado da divisao real: " << (float)numero1/numero2;
	cout << "\nResultado da potenciacao do primeiro elevado ao segundo: " << pow(numero1, numero2) << "\n";

	system ("pause") ;
	return 0 ;
}