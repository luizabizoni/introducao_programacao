#include <iostream>

using namespace std ;

int main (){

	string nome, categoria, classe_social;
    int idade;
    float renda_familiar;
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite sua idade: ";
    cin >> idade;
    cout << "\nDigite a renda mensal da sua familia: ";
    cin >> renda_familiar;
    if (idade <= 15)
    {
        categoria = "Infantil";
    }
    else if (idade > 15 && idade <= 18)
    {
        categoria = "Juvenil";
    }
    else
    {
        categoria = "adulto";
    }

    if (renda_familiar <= 1000)
    {
        classe_social = "Media Baixa";
    }
    else if (renda_familiar > 1000 && renda_familiar <= 3500)
    {
        classe_social = "Media";
    }
    else
    {
        classe_social = "Media Alta";
    }
      
    cout << "\nVoce esta na categoria " << categoria;
    cout << "\nSua classe social eh: " << classe_social;

	system ("pause") ;
	return 0 ;
}