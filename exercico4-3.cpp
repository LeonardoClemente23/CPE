/*
Lista 3 - Exercicio 1
Autor: Leonardo Clemente
Data: 03/04/2024
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
