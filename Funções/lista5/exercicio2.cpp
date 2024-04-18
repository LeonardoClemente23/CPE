/*
Lista 5 - Exercicio 2
Autor: Leonardo Clemente
Data: 17/04/2024

2 - Um número inteiro maior que 1 é considerado primo se for divisível por apenas 1 e ele
próprio. Por exemplo, 2, 3, 5 e 7 são números primos, mas 4, 6, 8 e 9 não são.
a) Escreva uma função que determine se um número é primo.
b) Use esta função em um código que determina e imprime todos os números primos entre
2 e 1.000.
c) Inicialmente, você pode pensar que n / 2 é o limite superior para o qual você deve testar
se um número é primo, mas você precisa ir apenas até a raiz quadrada de n. Reescreva o
código e execute-o nas duas maneiras para mostrar que você obtém o mesmo resultado.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool ehPrimo(int n){
	if(n < 2) return false;
	
	for(int i = 2; i <= n/2; i++){
		if (n % i == 0) return false;
	}
	return true;
}

bool ehPrimoOtimizado(int n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	
	
	for(int i = 3; i < sqrt(n); i+=2){
	if (n % i == 0) return false;
	}
	return true;
}

int main() {
 	for(int i = 2; i <= 1000; i++){
		if(ehPrimo(i)){
		cout << i << " e primo" << endl;
		}
		
		if(ehPrimo(i) && ehPrimoOtimizado(i)){
			cout << "Os dois metodos chegaram no mesmo resultado." << endl;
		}
			
	} 
}
