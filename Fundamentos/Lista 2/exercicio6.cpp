/*
Lista 1 - Exerc�cio 6
Autor: Leonardo Clemente
Data: 27/03/2024
*/

#include <iostream>

using namespace std;

int main (){
	int n1;
	int n2;

	cout << "Escreva dois numeros e veja se sao multiplos: ";
	cin >> n1;
	cin >> n2;

	if (n1 % n2 == 0){
		cout << n1 << " eh multiplo de " << n2 << "." << endl;
	}
	else{
		cout << n1 << " nao eh multiplo de " << n2 << "." << endl;
	}
	return 0;
}