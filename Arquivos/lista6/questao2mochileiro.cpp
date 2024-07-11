/*
Lista 6 - Exerc�cio 2
Autor: Leonardo Clemente
Data: 09/07/2024


*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream texto;
    // Abre arquivo do texto
    texto.open ("arquivos/mochileiro.txt");
    if(!texto.is_open()){
        cerr << "Nao foi possivel abrir o arquivo" << endl;
        return 1;
    }
    string conteudo;
    string linha;

    while(getline(texto, linha)){
        conteudo += linha;
    }
    texto.close();

    char letra;
    int cont = 0;
    cout << "Qual letra voce quer saber a quantidade? ";
    cin >> letra;

    for(char caractere : conteudo){
        if (caractere == letra){
            cont++;
        }
    }

    cout << "quantidade de \"" << letra << "\": " << cont << endl;

    return 0;
}
