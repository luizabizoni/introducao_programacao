#include <iostream>

using namespace std ;

int main (){

	string nome, numero_telefone;
    int tipo_de_telefone, impulsos_registrados, interurbanos;
    float tarifa_basica, servico_local, tarifa_interurbanos, total;
    
    cout << "\nDigite seu nome: ";
    cin >> nome;
    cout << "\nDigite seu numero de telefone: ";
    cin >> numero_telefone;
    cout << "\nDigite o numero de impulsos registrados: ";
    cin >> impulsos_registrados;
    cout << "\nDigite o numero de ligacoes interurbanas feitas: ";
    cin >> interurbanos;
    cout << "\nDigite o tipo de linha (1: Residencial, 2: Comercial): ";
    cin >> tipo_de_telefone;

    switch (tipo_de_telefone)
    {
    case 1:
        tarifa_basica = 38.14;
        break;

    case 2:
        tarifa_basica = 64.69;
        break;
    
    default:
        break;
    }

    if (impulsos_registrados > 100)
    {
        servico_local = 0.15*(impulsos_registrados-100);
    }
    else
    {
        servico_local = 0;
    }
    
    tarifa_interurbanos = interurbanos + (interurbanos * 0.05);
    total = tarifa_basica + servico_local + tarifa_interurbanos;

    cout << "\nTarifa basica: R$" << tarifa_basica;
    cout << "\nValor do servico local: R$" << servico_local;
    cout << "\nTarifa de interurbanos: R$" << tarifa_interurbanos;
    cout << "\nValor da conta: R$" << total;

	system ("pause") ;
	return 0 ;
}