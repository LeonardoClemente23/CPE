/*
Lista 5 - Exercicio 6
Autor: Leonardo Clemente
Data: 17/04/2024

6 - (Torres de Han�i) Todo programador iniciante deve lidar com certos problemas cl�ssicos.
As Torres de Han�i (veja a figura abaixo) s�o uma das mais famosas. Diz a lenda que, em
um templo no Extremo Oriente, os monges est�o tentando mover uma pilha de discos de
uma estaca para outra. A pilha inicial tinha 64 discos enfiados em uma estaca e
organizados de baixo para cima, diminuindo o tamanho. Os monges est�o tentando mover a
pilha dessa estaca para uma segunda estaca, sob as restri��es de que exatamente um
disco � movido por vez e que em nenhum momento um disco maior pode ser colocado
acima de um disco menor. Uma terceira estaca est� dispon�vel para a reten��o tempor�ria
de discos. Supostamente, o mundo terminar� quando os sacerdotes conclu�rem sua tarefa;
portanto, h� pouco incentivo para facilitarmos seus esfor�os. Vamos supor que os padres
est�o tentando mover os discos da estaca 1 para a estaca 3. Desejamos desenvolver um
algoritmo que imprima a sequ�ncia precisa das transfer�ncias de disco estaca-estaca.
Se abord�ssemos esse problema com m�todos convencionais, rapidamente nos
encontrar�amos irremediavelmente envolvidos no gerenciamento dos discos. Em vez disso,
se atacarmos o problema com a recurs�o em mente, ele se tornar� imediatamente trat�vel.
Mover discos pode ser visualizado em termos de mover apenas
discos (da� a recurs�o), da seguinte maneira:
a) Mova discos da estaca 1 para a estaca 2, usando a estaca 3 como uma �rea de
reten��o tempor�ria.
b) Mova o �ltimo disco (o maior) da estaca 1 para a estaca 3.
c) Mova os discos da estaca 2 para a estaca 3, usando a estaca 1 como uma �rea de
reten��o tempor�ria.
O processo termina quando a �ltima tarefa envolve mover disco n = 1, ou seja, o caso base.
Isso � feito trivialmente movendo o disco sem a necessidade de uma �rea de reten��o
tempor�ria.
Escreva um programa para resolver o problema das Torres de Hanoi. Use uma fun��o
recursiva com quatro par�metros:
a) O n�mero de discos a serem movidos
b) A estaca na qual esses discos s�o inicialmente enfiados
c) A estaca para o qual essa pilha de discos deve ser movida
d) A estaca a ser usada como �rea de reten��o tempor�ria
Seu c�digo deve imprimir as instru��es precisas necess�rias para mover os discos do ponto
inicial para o ponto de destino. Por exemplo, para mover uma pilha de tr�s discos da estaca
1 para a estaca 3, seu programa deve imprimir a seguinte s�rie de movimentos:
1 -> 3 (Isto indica mover um disco da estaca 1 para a estaca 3)
1 -> 2
3 -> 2
1 -> 3
2 -> 1
2 -> 3
1 -> 3
*/

#include <iostream>
#include <cstdlib>
#include <time.h> 

using namespace std;

void hanoi(int total_discos, int estaca_origem, int estaca_destino, int estaca_auxiliar){
	if (total_discos == 1) {
		cout << estaca_origem << " -> " << estaca_destino << endl;
		return;
	}
	
	hanoi(total_discos - 1, estaca_origem, estaca_auxiliar, estaca_destino);
	cout << estaca_origem << " -> " << estaca_destino << endl;

	hanoi(total_discos - 1, estaca_auxiliar, estaca_destino, estaca_origem);

	
}

int main(){

	hanoi(3, 1, 3, 2);
	return 0;
}
