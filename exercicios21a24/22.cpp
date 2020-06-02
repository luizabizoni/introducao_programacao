#include <iostream>

using namespace std ;

int main (){

	float celsius, fahrenheit;
    cout << "Convertendo Fahrenheit em Celsius\n";
    cout << "\nDigite a temperatura a ser convertida\n";
    cin >> fahrenheit;
    celsius = ((fahrenheit - 32)*5)/9;
    cout << "\nTemperatura em Fahrenheit: " << fahrenheit;
    cout << "\nTemperatura em Celcius: " << celsius << "\n";

	system ("pause") ;
	return 0 ;
}