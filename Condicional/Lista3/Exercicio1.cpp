/*
Lista 3 - Exerc�cio 1
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Motoristas se preocupam com a autonomia que seus carros fazem ao dirigir. Um motorista
gravou o registro de quantos litros e quantos kilometros seu carro fez para cada enchida no
tanque. Crie um código que receba como entrada a quantidade de litros e a quantidade de
quilômetros percorrido pelo carro e calcule o consumo de cada tanque completado em kmvlitro.
Após processar todas as entradas, calcule e imprima a média do consumo que o carro fez. (=total
de kilometros percorrido divídio pelo total de gasolina consumida em litros).
*/

#include <iostream>

using namespace std;

int main(){
	float km_percorrido;
	float litros_gasolina;
	
	cout << "Escreva a quantidade de quilometros percorridos: ";
	cin >> km_percorrido;

	cout << "Escreva a quantidade de litros de gasolina gastos: ";
	cin >> litros_gasolina;
	
	cout << "Consumo medio: " << km_percorrido / litros_gasolina << "km/l.";

	return 0;
}
