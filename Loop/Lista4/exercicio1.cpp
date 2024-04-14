/*
Lista 4 - Exercicio 1
Autor: Leonardo Clemente
Data: 03/04/2024


1 - O fatorial de um número inteiro não negativo n é escrito como n! (pronunciado “n fatorial”) e é
definido do seguinte modo: para valores , para
. Por exemplo, , que é 120. Os fatoriais aumentam de tamanho
muito rapidamente. Qual é o maior fatorial que seu programa pode calcular antes de gerar um
estouro de memória?
A) Escreva um programa que leia um número inteiro não negativo e calcule e imprima seu
fatorial.b
B) Escreva um programa que calcule o valor da constante matemática usando a seguinte
fórmula (Nota: Seu código pode parar após somar 10 termos.)
C) Escreva um programa que calcule o valor da constante matemática usando a seguinte fórmula
(Nota: Seu código pode parar após somar 10 termos.)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	//Quest�o 1.a)
	unsigned int n;
	int fatorial = 1;
	
	cout << "Escreva um numero para saber seu fatorial: ";
	cin >> n;
	
	for (int i=1; i<=n; i++){
		fatorial *= i;
	}
	
	cout << "a) " << n <<"! = " << fatorial << endl;
	
	//Quest�o 1.b)
	fatorial = 1;
	float e = 1;
	for (int i=1; i<10; i++){
		fatorial *= i;
		e += (1.0/fatorial);
	}
	cout << "b) e = " << e << " (valor aproximado)." << endl;
	
	//Quest�o 1.c)
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
