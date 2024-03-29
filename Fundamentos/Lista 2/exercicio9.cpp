/*
Lista 1 - Exerc�cio 9
Autor: Leonardo Clemente
Data: 27/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int km_rodado;
	float custo_aluguel;

	cout << "Escreva quantos km foram percorridos: ";
	cin >> km_rodado;

	if (km_rodado <= 50) {
		custo_aluguel = km_rodado * 1.75;
	} 
	else if (km_rodado > 50 and km_rodado <= 150)
	{
		custo_aluguel = (50 * 1.75) + ((km_rodado - 50) * 1.65);
	} 
	else if (km_rodado > 150)
	{
		custo_aluguel = (50 * 1.75) + (100 * 1.65) + ((km_rodado - 150) * 1.5);
	}

	cout << fixed;
	cout.precision(2);
	cout << "Valor a ser pago: R$" << custo_aluguel << endl;

	return 0;
}