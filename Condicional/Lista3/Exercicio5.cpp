/*
Lista 3 - Exerc�cio 5
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Crie um programa que detecta se um caractere fornecido de entrada é uma vogal usando o
comando switch case.
*/

#include <iostream>

using namespace std;

int main(){
	char letra;
	
	cout << "Digite UMA letra:";
	cin >> letra;
	
	letra = tolower(letra);
	
	switch(letra){
		case 'a':
			cout << "Eh vogal";
			break;
		case 'e':
			cout << "Eh vogal";
			break;
		case 'i':
			cout << "Eh vogal";
			break;
		case 'o':
			cout << "Eh vogal";
			break;
		case 'u':
			cout << "Eh vogal";
			break;
		default:
			cout << "Nao eh vogal";
	}
}
