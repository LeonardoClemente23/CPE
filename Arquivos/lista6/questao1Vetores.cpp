/*
Lista 6 - Exerc�cio 1
Autor: Leonardo Clemente
Data: 09/07/2024


*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main () {
    ifstream vetores;
    // Abre arquivo de vetores
    vetores.open ("arquivos/vetores.txt");
    if(!vetores.is_open()){
        cerr << "Nao foi possivel abrir o arquivo" << endl;
        return 1;
    }
    vector<int> somas;
    vector<int> valores;

    string linha;
    int soma = 0;
    // Processa cada linha do arquivo
    while (getline(vetores, linha)) {
        istringstream numeros(linha);
        int valor;
        // pega cada numero da linha e acumaula em soma
        while (numeros >> valor) {
            valores.push_back(valor);
        }

        for(int numero : valores){
            soma += numero;
        }
        somas.push_back(soma);
        soma = 0;
        valores.clear();
    }
    // fecha arquivo vetores
    vetores.close();

    ofstream somas_arquivo;
    // Abre o arquivo soma para guardar as somas
    somas_arquivo.open("arquivos/soma.txt");
    for (int soma : somas){
        somas_arquivo << soma << endl;
    }
    somas_arquivo.close();

    return 0;
}
