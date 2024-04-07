/*
Lista 3 - Exerc�cio 7
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha
válida é o número 1234. Devem ser impressas as seguintes mensagens:

ACESSO PERMITIDO caso a senha seja válida.
ACESSO NEGADO caso a senha seja inválida.

*/

#include <iostream>

using namespace std;

int main(){
	string tentativa;
	
	cout << "Digite sua senha: ";
	cin >> tentativa;

    if (tentativa == "1234") cout << "ACESSO PERMITIDO";
    else cout << "ACESSO NEGADO";
	
}