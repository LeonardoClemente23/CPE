/*
Lista 5 - Exercicio 3
Autor: Leonardo Clemente
Data: 17/04/2024

3 - Um número inteiro é considerado um número perfeito se a soma de seus fatores,
incluindo 1 (mas não o número em si), for igual ao número. Por exemplo, 6 é um número
perfeito, porque 6 = 1 + 2 + 3. Escreva a função perfect que determina se o número do
parâmetro é um número perfeito. Use esta função em um código que determina e imprime
todos os números perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para
confirmar que o número é realmente perfeito. Desafie o poder do seu computador testando
números muito maiores que 1000.
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
