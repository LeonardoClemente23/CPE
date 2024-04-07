/*
Lista 3 - Exerc�cio 8
Autor: Leonardo Clemente
Data: 03/04/2024

Questão: Codifique um programa que faça a leitura de dois número reais. A seguir o programa lê um
caractere, que deve ser +, -, * ou /, e realiza a operação indicada pelo caractere sobre os valores
lidos. Seu programa deve usar o comando switch. O programa deve imprimir o resultado da
operação realizada sobre eles, como mostra o exemplo a seguir (exibindo exatamente duas casas
decimais):

Resultado: 4.50 + 5.00 = 9.50

*/

#include <iostream>

using namespace std;

int main(){
	float n1;
	float n2;
	char operacao;
	
	cout << "Digite dois numeros: " << endl;
	cin >> n1;
	cin >> n2;
    cout << "Digite o simbolo da operacao desejada: " << endl;
    cin >> operacao;

    cout << fixed;
    cout.precision(2);
    switch (operacao)
    {
    case '+':
        cout << "Resultado: " << n1 << " " << operacao << " " << n2 << " = " << n1 + n2 << endl;
        break;

    case '-':
        cout << "Resultado: " << n1 << " " << operacao << " " << n2 << " = " << n1 - n2 << endl;
        break;

    case '/':
        cout << "Resultado: " << n1 << " " << operacao << " " << n2 << " = " << n1 / n2 << endl;
        break;

    case '*':
        cout << "Resultado: " << n1 << " " << operacao << " " << n2 << " = " << n1 * n2 << endl;
        break;
    
    default:
        cout << "Sinal invalido.";
    }
	
}