/*
Lista 5 - Exercicio 2
Autor: Leonardo Clemente
Data: 17/04/2024

2 - Um n�mero inteiro maior que 1 � considerado primo se for divis�vel por apenas 1 e ele
pr�prio. Por exemplo, 2, 3, 5 e 7 s�o n�meros primos, mas 4, 6, 8 e 9 n�o s�o.
a) Escreva uma fun��o que determine se um n�mero � primo.
b) Use esta fun��o em um c�digo que determina e imprime todos os n�meros primos entre
2 e 1.000.
c) Inicialmente, voc� pode pensar que n / 2 � o limite superior para o qual voc� deve testar
se um n�mero � primo, mas voc� precisa ir apenas at� a raiz quadrada de n. Reescreva o
c�digo e execute-o nas duas maneiras para mostrar que voc� obt�m o mesmo resultado.
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
