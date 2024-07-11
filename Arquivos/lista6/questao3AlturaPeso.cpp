/*
Lista 6 - Exerc�cio 3
Autor: Leonardo Clemente
Data: 09/07/2024


*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string acha_mais_alto(vector<string> identificacoes, vector<float> alturas){
    int id_maior;
    float maior = 0.0;
    for(int i=0; i < alturas.size(); i++){
        if (alturas[i] > maior){
            maior = alturas[i];
            id_maior = i;
        }
    }
    return identificacoes[id_maior];
}

string acha_mais_pesado(vector<string> identificacoes, vector<float> pesos){
    int id_maior;
    float maior = 0.0;
    for(int i=0; i < pesos.size(); i++){
        if (pesos[i] > maior){
            maior = pesos[i];
            id_maior = i;
        }
    }
    return identificacoes[id_maior];
}

int main()
{
    ifstream alturas_arquivo;
    ifstream pesos_arquivo;

    vector<string> identificacoes;
    vector<float> alturas;
    vector<float> pesos;

    string linha;
    float altura;
    float peso;
    int cont = 0;

    // 
    alturas_arquivo.open("arquivos/alturas.txt");
    pesos_arquivo.open("arquivos/pesos.txt");
    if(!alturas_arquivo.is_open()){
        cerr << "Nao foi possivel abrir o arquivo 1" << endl;
        return 1;
    }
    if(!pesos_arquivo.is_open()){
        cerr << "Nao foi possivel abrir o arquivo 2" << endl;
        return 1;
    }

    while(getline(alturas_arquivo, linha)){
        if (cont % 2 == 0){
            identificacoes.push_back(linha);
        } else {
            alturas.push_back(stof(linha));
        }
        cont++;
    }
    alturas_arquivo.close();
    cont = 0;

    while(getline(pesos_arquivo, linha)){
        if (cont % 2 == 0){
            cont++;
            continue;
        } else {
            pesos.push_back(stof(linha));
        }
        cont++;
    }
    pesos_arquivo.close();

    string mais_alto = acha_mais_alto(identificacoes, alturas);
    string mais_pesado = acha_mais_pesado(identificacoes, pesos);

    cout << "Pessoa mais alta: " << mais_alto << endl;
    cout << "Pessoa mais pesada: " << mais_pesado << endl;

    return 0;
}