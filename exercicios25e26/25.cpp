#include <iostream>

using namespace std ;

int main (){

	/* Exercício 23:
	
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
    cout << "\nA media ponderada das suas notas foi: " << media_ponderada;*/

	// Exercício 24

	float saldo_atual, primeira_retirada, segunda_retirada, deposito, retiradas;

	// Pede ao cliente que digite o saldo e guarda a entrada na variável "saldo_atual"
    cout << "\nDigite seu saldo atual: ";
    cin >> saldo_atual;
	// Pede ao cliente que digite o valor das retiradas e guarda as entradas nas variáveis "primeira_retirada" e "segunda_retirada"
    cout << "\nDigite o valor da primeira retirada: ";
    cin >> primeira_retirada;
    cout << "\nDigite o valor da segunda retirada: ";
    cin >> segunda_retirada;
	// Pede ao cliente que digite o valor do depósito e guarda a entrada na variável "deposito"
    cout << "\nDigite o valor do deposito: ";
    cin >> deposito;
	// Mostra o saldo anterior do cliente e soma o valor das retiradas
    cout << "\nSeu saldo era de R$" << saldo_atual;
    retiradas = primeira_retirada + segunda_retirada;
	// Mostra o valor das retiradas e do depósito
    cout << "\nO total das retiradas foi de R$" << retiradas;
    cout << "\nO total de depositos foi de R$" << deposito;
	// Mostra o resultado do cálculo da diferença entre a soma do saldo anterior com o valor depositado e o valor das retiradas
    cout << "\nSaldo final: R$" << (saldo_atual + deposito) - retiradas << "\n";

	system ("pause") ;
	return 0 ;
}