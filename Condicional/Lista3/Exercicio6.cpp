/*
Lista 3 - Exerc�cio 6
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é
Equilátero, Isósceles ou Escaleno. Sendo que:

— Triângulo Equilátero: possui os 3 lados iguais.
— Triângulo Isóscele: possui 2 lados iguais.
- Triângulo Escaleno: possui 3 lados diferentes.
*/

#include <iostream>

using namespace std;

int main(){
	float lado1;
	float lado2;
	float lado3;
	
	cout << "Digite a medida dos 3 lados de um triangulo: ";
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1){
        cout << "Triangulo equilatero.";
    } else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
        cout << "Triangulo isosceles.";
    } else {
        cout << "Triangulo escaleno";
    }
	
    return 0;
}