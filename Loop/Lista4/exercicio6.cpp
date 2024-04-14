/*
Lista 4 - Exercicio 6
Autor: Leonardo Clemente
Data: 03/04/2024

6 - Escreva um programa para jogar um jogo de adivinha��o de n�meros. O usu�rio pensa em um
n�mero entre 1 e 100 e seu programa faz perguntas para descobrir qual � o n�mero (por exemplo,
�O n�mero em que voc� est� pensando � menor que 50?�). Seu programa deve ser capaz de
identificar o n�mero depois de fazer no m�ximo sete perguntas. Dica: Use os operadores <, <=, a
constru��o if-else e a fun��o rand caso tenha d�vida
*/
#include <iostream>

using namespace std;

int main(){

	bool acertou = false;
	int perguntas = 0;
	int maior = 100;
	int menor = 0;
	int meio;
	char sim_nao;
	
	cout << "Pense em um numero INTEIRO entre 0 e 100 que eu irei adivinhar..." << endl;
	
	while(!acertou && perguntas < 7){
		meio = (maior + menor) / 2;
		if (meio == 0) break;
		
		cout << "O numero que voce pensou eh " << meio << "! (S/N)" << endl;
		cin >> sim_nao;

		if ((sim_nao == 'S' || sim_nao == 's')) {
			acertou = true;
		} else if ((sim_nao != 'N' && sim_nao != 'n')){
			cout << " Escreva uma resposta valida!" << endl;
			continue;
		}

		cout << "Seu numero eh maior que " << meio << "? (S/N)" << endl;
		cin >> sim_nao;
		
		if ((sim_nao == 'S' || sim_nao == 's')) {
			menor = meio;
			perguntas++;
		} else if ((sim_nao == 'N' || sim_nao == 'n')){
			maior = meio;
			perguntas++;
		} else {
			cout << " Escreva uma resposta v�lida!" << endl;
			continue;
		}
	}
	if (acertou) cout << "Acertei!: "<< meio;
	if (!acertou && meio == 0) cout << "zero nao vale...";
	if (!acertou && meio == 99) cout << "O numero que voce pensou eh 100! (S/N)" << endl;
	cin >> sim_nao;
	
	if ((sim_nao == 'S' || sim_nao == 's')) {
	   cout << "Acertei!: "<< meio;
	} else if ((sim_nao == 'N' || sim_nao == 'n')){
	  cout << "NAO?!?";
	}
}
