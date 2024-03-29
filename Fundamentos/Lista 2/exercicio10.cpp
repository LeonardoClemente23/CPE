/*
Lista 1 - Exerc�cio 9
Autor: Leonardo Clemente
Data: 27/03/2024
*/

#include <iostream>
#include <cmath>
#include <string>
#include <set>

using namespace std;

bool ehVogal (char letra) {
        letra = tolower(letra);
    return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';
}

char encriptaVogal(char letra) {
    letra = tolower(letra);

    if(letra == 'a') return 'i';
    if(letra == 'e') return 'o';
    if(letra == 'i') return 'u';

    return letra;
}

int main (){
    string palavra;
    int qtd_vogais = 0;
	set<char> vogais;

	cout << "Escreva uma palavra com 5 letras: ";
	cin >> palavra;

    for (char letra: palavra)
    {
        if (ehVogal(letra)){
            qtd_vogais += 1;
            vogais.insert(letra);
        }
    }

    cout << "quantidade de vogais: " << qtd_vogais << endl;
    cout << "Vogais: ";
    for (char vogal: vogais){
        cout << vogal << " ";
    }
    cout << "\n";
    
    string palavra_cripto = "";

    for (char letra: palavra) palavra_cripto += (encriptaVogal(letra));

    cout << "Palavra encriptada: " << palavra_cripto << endl;


	return 0;
}