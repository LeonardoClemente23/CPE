/*
Lista 3 - Exerc�cio 3
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Palíndromo é um número ou texto que se lê da mesma maneira de trás para frente ou de
frente para trás. Por exemplo, cada um dos dígitos a seguir é um palindrome: 12321, 55555,
45554 and 11611. Escreva um código que lê cinco dígitos inteiros e determina se é um
palíndromo. (Dica: use a divisão e o operador módulo para separar o número em seus dígitos
individuais)
*/

#include <iostream>

using namespace std;

int main(){
	int n;
	
	cout << "Escreva um numero de 5 digitos: ";
	cin >> n;
	
	if ((n/10000) == (n%10) && ((n/1000)%10) == ((n%100)/10)){
		cout << n << " eh um palindromo.";
	} else {
		cout << n << " nao eh um palindromo.";		
	}
}
