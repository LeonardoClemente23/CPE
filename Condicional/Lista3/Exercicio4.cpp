/*
Lista 3 - Exerc�cio 4
Autor: Leonardo Clemente
Data: 27/03/2024

Questão: Entre com valores inteiros de Os e 1s representando um número binário e calcule seu valor
decimal correspondente. (Dica: use o operador módulo e divisão para selecionar os dígitos do
número "binário", um de cada vez, da direita para a esquerda. Assim como no sistema de número
decimal, em que o dígito mais à direita tem o valor posicional 1 e o próximo dígito à esquerda tem o
valor posicional 10, depois 100, depois 1000 etc. no sistema de números binários, o mais à direita
dígito tem um valor posicional 1, o próximo dígito à esquerda tem o valor posicional 2, depois 4,
depois 8, etc. Assim, o número decimal 234 pode ser interpretado como 2 x 100 +3 x 10+4x 1.
O equivalente decimal do binário 110161 x8+1x4+0x2+1x1.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string binario;
	
	cout << "Digite o numero binario que deseja converter para decimal" << endl;
	cin >> binario;
	
	int decimal = 0;
	int tamanho_binario = binario.size();
	
	for (int i = 0; i < tamanho_binario ; i++){
		if (binario[i] == '1'){
			decimal += pow(2, (tamanho_binario - (i+1)));
	}
}
	cout << "Numero em decimal: " << decimal << endl;
}
