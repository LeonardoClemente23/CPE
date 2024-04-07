/*
Lista 3 - Exerc�cio 2
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Crie uma calculadora álcool x gasolina. O etanol vale a pena quando custar até 70% do valor
da gasolina. Como é feito o cálculo? Dividimos o valor do litro do álcool pelo da gasolina. Quando
o resultado é menor que 0,7, exiba uma recomendação dizendo para abastecer com álcool. Se
for maior, exiba a recomendação para escolher a gasolina.
*/

#include <iostream>

using namespace std;

int main(){
	float preco_alcool;
	float preco_gasolina;
	
	cout << "Escreva o preco da gasolina por litro: ";
	cin >> preco_gasolina;
	cout << "Escreva o preco da alcool por litro: ";
	cin >> preco_alcool;
	
	float razao = preco_alcool / preco_gasolina;
	
	if (razao > 0.7){
		cout << "Melhor abastecer com gasolina" << endl;
	} else {
		cout << "Melhor abastecer com alcool" << endl;
	}
}
