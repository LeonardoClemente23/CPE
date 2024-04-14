/*
Lista 4 - Exercicio 3
Autor: Leonardo Clemente
Data: 03/04/2024

3 - (Triplos de pitágoras) Um triângulo retângulo pode ter lados que são todos inteiros. O conjunto
de três valores inteiros para os lados de um triângulo retângulo é chamado de triplo de pitágoras.
Esses três lados devem satisfazer a relação de que a soma dos quadrados de dois dos lados é igual
ao quadrado da hipotenusa. Encontre todos os triplos pitagóricos para lado1, lado2 e hipotenusa,
todos com tamanho não superior a 20. Use um laço for triplamente aninhado que tente todas as
possibilidades. Este é um exemplo de computação de "força bruta". Você aprenderá em cursos de
ciência da computação mais avançados que existem muitos problemas interessantes para os quais
não existe uma abordagem algorítmica conhecida além da pura força bruta.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//k -> hipotenusa
	//i, j -> catetos
	for(int i=1; i <= 20; i++){
		for(int j=1; j <= 20; j++){
			for(int k=1; k <= 20; k++){
				if((pow(i,2) + pow(j,2))== pow(k,2)){
					cout << i <<", "<< j <<" e "<< k << " eh um trio pitagorico" << endl;
				}
			}
		}
	}
}
