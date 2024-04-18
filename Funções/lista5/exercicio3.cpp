/*
Lista 5 - Exercicio 3
Autor: Leonardo Clemente
Data: 17/04/2024

3 - Um n�mero inteiro � considerado um n�mero perfeito se a soma de seus fatores,
incluindo 1 (mas n�o o n�mero em si), for igual ao n�mero. Por exemplo, 6 � um n�mero
perfeito, porque 6 = 1 + 2 + 3. Escreva a fun��o perfect que determina se o n�mero do
par�metro � um n�mero perfeito. Use esta fun��o em um c�digo que determina e imprime
todos os n�meros perfeitos entre 1 e 1000. Imprima os fatores de cada n�mero perfeito para
confirmar que o n�mero � realmente perfeito. Desafie o poder do seu computador testando
n�meros muito maiores que 1000.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool perfect(int n){
	if(n <= 1) return false;
	
	int soma_divisores = 1;
	
	for(int i = 2; i <= n/2; i++) {	
        if(n % i == 0) soma_divisores += i;
	}
	if(n != soma_divisores) return false;
	
	return true;
}

int main(){
	for(int i = 0; i <= 1000; i++){
		if (perfect(i)){
			cout << i << " e um numero perfeito." << endl;
		}
	}
}
