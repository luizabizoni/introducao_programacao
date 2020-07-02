#include <iostream>

using namespace std ;

int main (){

    // Faça um algoritmo que leia um grupo de fichas contendo datas no formato DD MM AA e imprima estas datas por extenso.
    // Considere como flag DIA menor ou igual a zero. Exemplo: 10 8 06: 10 de agosto de 2006 (Considere que todas as datas são do século XXI.).
    int dia, mes, ano;
    string meses[12];
    meses[0] = "janeiro";
    meses[1] = "fevereiro";
    meses[2] = "marco";
    meses[3] = "abril";
    meses[4] = "maio";
    meses[5] = "junho";
    meses[6] = "julho";
    meses[7] = "agosto";
    meses[8] = "setembro";
    meses[9] = "outubro";
    meses[10] = "novembro";
    meses[11] = "dezembro";
    
    
    cout << "\nDigite o dia: ";
    cin >> dia;
    cout << "\nDigite o mes: ";
    cin >> mes;
    cout << "\nDigite o ano: ";
    cin >> ano;

    mes = mes -1;

    cout << "\n\nData: " << dia << " de " << meses[mes] << " de 20" << ano;
}