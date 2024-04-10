/*
Lista 3 - Exercicio 1
Autor: Leonardo Clemente
Data: 03/04/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	//Questão 1.a)
	unsigned int n;
	int fatorial = 1;
	
	cout << "Escreva um numero para saber seu fatorial: ";
	cin >> n;
	
	for (int i=1; i<=n; i++){
		fatorial *= i;
	}
	
	cout << "a) " << n <<"! = " << fatorial << endl;
	
	//Questão 1.b)
	fatorial = 1;
	float e = 1;
	for (int i=1; i<10; i++){
		fatorial *= i;
		e += (1.0/fatorial);
	}
	cout << "b) e = " << e << " (valor aproximado)." << endl;
	
	//Questão 1.c)
	float x;
	cout << "Na funcao f(x) = e^x, escreva o valor de x: ";
	cin >> x;
	
	fatorial = 1;
	float e_x = 1;
	for (int i=1; i<10; i++){
		fatorial *= i;
		e_x += (x/fatorial);
	}
	
	cout << "f(" << x << ") = " << e_x << " (valor aproximado)." << endl;
}
