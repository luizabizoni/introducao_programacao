#include <iostream>

using namespace std ;

int main (){

	int altura;
    string sexo;
    float peso_ideal;
    cout << "\nDigite sua altura em centimetros: ";
    cin >> altura;
    cout << "\nDigite seu sexo (utilize M para masculino e F para feminino): ";
    cin >> sexo;
    if (sexo == "M" || sexo == "m")
    {
        peso_ideal = (72.7 * ((float)altura/100)) - 58;
        cout << "Seu peso ideal eh " << peso_ideal << "kg.";
    }
    else if (sexo == "F" || sexo == "f")
    {
        peso_ideal = (62.1 * ((float)altura/100)) - 44.7;
        cout << "Seu peso ideal eh " << peso_ideal << "kg.";
    }
    else{
        cout << "Voce digitou um valor invalido para o campo sexo";
    }

	system ("pause") ;
	return 0 ;
}