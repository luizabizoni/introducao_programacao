#include <iostream>

using namespace std ;

int main (){

	int peso_portugues, peso_matematica, peso_direito;
    float nota_portugues, nota_matematica, nota_direito, media_aritmetica, media_ponderada;
    peso_portugues = 2;
    peso_matematica = 4;
    peso_direito = 3;
    cout << "\nDigite a sua nota em cada uma das provas:\n";
    cout << "\nPortugues: ";
    cin >> nota_portugues;
    cout << "\nMatematica: ";
    cin >> nota_matematica;
    cout << "\nDireito: ";
    cin >> nota_direito;
    media_aritmetica = (nota_portugues + nota_matematica + nota_direito)/3;
    cout << "\nA media aritmetica das suas notas foi: " << media_aritmetica;
    media_ponderada = ((nota_portugues*peso_portugues)+(nota_matematica*peso_matematica)+(nota_direito*peso_direito))/(peso_portugues+peso_matematica+peso_direito);
    cout << "\nA media ponderada das suas notas foi: " << media_ponderada << "\n";

	system ("pause") ;
	return 0 ;
}