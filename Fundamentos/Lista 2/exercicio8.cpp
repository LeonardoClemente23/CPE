/*
Lista 1 - Exerc�cio 8
Autor: Leonardo Clemente
Data: 27/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int cateto1;
    int cateto2;

	cout << "Escreva a medida de dois catetos de um triangulo retangulo: \n";
	cout << "Cateto 1: ";
	cin >> cateto1;
	cout << "Cateto 2: ";
	cin >> cateto2;

    float hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "Hipotenusa = " << hipotenusa << endl;
	return 0;
}