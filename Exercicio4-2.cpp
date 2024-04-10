/*
Lista 3 - Exercicio 1
Autor: Leonardo Clemente
Data: 03/04/2024
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
