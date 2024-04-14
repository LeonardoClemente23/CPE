/*
Lista 4 - Exercicio 2
Autor: Leonardo Clemente
Data: 03/04/2024

2 - Escreva um programa que imprima os seguintes padrões separadamente, um abaixo do outro,
cada padrão separado do próximo por uma linha em branco. Use laços for para gerar os padrões.
Todos os asteriscos (*) devem ser impressos por uma única declaração na forma: cout << ‘*’ ;
o que faz com que os asteriscos imprimam lado a lado, uma declaração no formato cout << '\n';
pode ser usado para passar para a próxima linha. Uma instrução no formato cout << ' '; pode ser
usado para exibir um espaço para os dois últimos padrões. (Dica: os dois últimos padrões exigem
que cada linha comece com um número apropriado de espaços em branco.) Crédito extra: combine
seu código dos quatro problemas separados em um único programa que imprime todos os quatro
padrões lado a lado, fazendo um uso inteligente dos laços aninhados for. Para todas as partes deste
exercício - minimize o número de asteriscos e espaços e o número de instruções que imprimem
esses caracteres.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	cout << "(A)" << endl;
	for (int i=0; i <= 10; i++){
		for (int j=0; j <= i; j++){
			cout << "*";
		}
	cout << "\n";
	}
	cout << "\n";
	
	cout << "(B)" << endl;
	for (int i=10; i>=0; i--){
		for (int j=0; j <= i; j++){
			cout << "*";
		}
	cout << "\n";
	}
	cout << "\n";
	
	cout << "(C)" << endl;
	for (int i=10; i>=0; i--){
		
		for (int j1=0; j1 <= (10-i); j1++){
			cout << " ";
		}
		for (int j2=0; j2 <= i; j2++){
			cout << "*";
		}
	cout << "\n";
	}
	cout << "\n";
	
	cout << "(D)" << endl;
	for (int i=10; i>=0; i--){
		
		for (int j2=0; j2 <= i; j2++){
			cout << " ";
		}
		for (int j1=0; j1 <= (10-i); j1++){
			cout << "*";
		}
	cout << "\n";
	}
}
