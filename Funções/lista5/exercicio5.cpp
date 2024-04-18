/*
Lista 5 - Exercicio 5
Autor: Leonardo Clemente
Data: 17/04/2024

5 - Escreva um código que reproduza o jogo de “adivinhar o número” da seguinte forma:
Seu programa escolhe o número a ser adivinhado selecionando um número inteiro
aleatoriamente no intervalo de 1 a 1000. O programa exibe
Eu tenho um número entre 1 e 1000.
Você consegue adivinhar o meu número?
Digite seu primeiro palpite.
O jogador digita um primeiro palpite. O programa responde com um dos seguintes:
1. Excelente! Você adivinhou o número! Você gostaria de jogar novamente (s ou n)?
2. Muito baixo. Tente novamente.
3. Muito alto. Tente novamente.
Se o palpite do jogador estiver incorreto, seu programa deve repetir até que o jogador
finalmente obtenha o número correto. Seu programa deve continuar dizendo ao reprodutor
Muito alto ou Muito baixo para ajudar o leitor a se concentrar na resposta correta. Após o
término do jogo, o programa deve solicitar ao usuário que digite "s" para jogar novamente
ou "n" para sair do jogo.
*/

#include <iostream>
#include <cstdlib>
#include <time.h> 

using namespace std;

int n_secreto;

void geraNumeroSecreto(){
	srand(time(0));
	
	n_secreto = (rand() % 1000) + 1; // +1 para deslocar o range 0-9 para 1-10.
	
}

bool continuar(){
	char sim_nao;
	
	while(true){
	cout << "Quer continuar? (S/N): ";
	cin >> sim_nao;
	if(sim_nao == 'S' || sim_nao == 's') return true;
	else if (sim_nao == 'N' || sim_nao == 'n') return false;
	else cout << "Digite uma resposta valida!" << endl;
	}
	
}

int main(){
	int chute = 0;
	
	do {
		cout << "Adivinhe que numero inteiro entre 1 e 1000 estou pensando..." << endl;
		geraNumeroSecreto();
		while(chute != n_secreto){
			cin >> chute;
			if(chute == n_secreto) cout << " Excelente! Voce adivinhou o numero!" << endl;
			else if (chute > n_secreto) cout << " Muito alto. Tente novamente" << endl;
			else if (chute < n_secreto) cout << " Muito baixo. Tente novamente" << endl;
		}
		
	} while(continuar());
	
	return 0;
}
