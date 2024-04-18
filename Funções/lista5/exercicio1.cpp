/*
Lista 5 - Exercicio 1
Autor: Leonardo Clemente
Data: 17/04/2024

1 - Implemente a seguinte função para retornar o equivalente em Fahrenheit de uma
temperatura Celsius.

F = (9/5)C + 32

Use esta função para escrever um código que imprima uma tabela mostrando os
equivalentes em Fahrenheit de todas as temperaturas Celsius de 0 a 100 graus. Use uma
posição de precisão à direita do ponto decimal para os resultados. Imprima as saídas em
um formato tabular limpo que minimize o número de linhas de saída enquanto permanece
legível.
*/

#include <iostream>

using namespace std;

float celsiusFahrenheit(float celsius){
	return ((9.0 /5.0) * celsius) + 32;
}

int main(){
	cout << "Tabela conversao de temperatura (Celsius -> Fahrenheit)\n" << endl;
	cout << "Celsius\t Fahrenheit" << endl;
	
	for(int i=0; i <=100; i++){
		cout << "   " << i << "\t|   " << celsiusFahrenheit(i) << endl;
		cout << "------------------" << endl;
	}
}
