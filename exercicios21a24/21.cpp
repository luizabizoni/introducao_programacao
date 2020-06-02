#include <iostream>

using namespace std ;

int main (){

	float velocidade_ms, velocidade_kmh, constante;
    constante = 3.6;
    cout << "Convertendo m/s para km/h";
    cout << "\n\nDigite a velocidade a ser convertida:\n";
    cin >> velocidade_ms;
	velocidade_kmh = velocidade_ms * constante;
    cout << velocidade_ms << "m/s = " << velocidade_kmh <<"km/h\n" ;

	system ("pause") ;
	return 0 ;
}