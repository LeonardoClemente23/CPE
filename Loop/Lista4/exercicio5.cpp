/*
Lista 4 - Exercicio 5
Autor: Leonardo Clemente
Data: 03/04/2024

5 - (Programa de impressao de graficos de barras) Uma aplicacao interessante dos computadores é 
exibir graficos e tabelas de barras. Escreva um aplicativo que leia cinco numeros entre 1 e 30. Para 
cada numero lido, seu programa deverá exibir o mesmo numero de asteriscos adjacentes. Por 
exemplo, se o seu programa le o numero 7, ele deverá exibir ******* . Mostrar as barras de 
asteriscos depois de ler todos os cinco numeros
*/
#include <iostream>

using namespace std;

int main(){
    int lista_numeros[5];
    int cont = 0;
    int temp;
    
    cout << "Escreva 5 numeros entre 1 e 30:" << endl;
    
    do {
		cout << "Numero" << cont + 1 << ": ";
		cin >> temp;	
    	if(temp < 1 || temp > 30){
    		cout << "Escreva um numero valido, entre 1 e 30." << endl;
    		continue;
		}
    	lista_numeros[cont] = temp;
    	cont++;
	} while(cont < 5);
	
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		cout << string(lista_numeros[i], '*') << endl;
	}

}
