/*
Lista 5 - Exercicio 4
Autor: Leonardo Clemente
Data: 17/04/2024

4 - Os computadores est�o desempenhando um papel crescente na educa��o. Escreva um
programa que ajude um aluno do ensino fundamental a aprender multiplica��o. Use o
m�dulo aleat�rio para produzir dois n�meros inteiros positivos de um d�gito. O programa
deve exibir uma pergunta, como
Quanto � 6 vezes 7?
O aluno digita a resposta. Em seguida, o programa verifica a resposta do aluno. Se estiver
correto, imprima a string "Muito bom!" na tela e fa�a outra pergunta de multiplica��o. Se a
resposta for errada, exibir "N�o. Por favor, tente novamente." e deixe o aluno tentar a
mesma pergunta repetidamente at� que o aluno finalmente acerte. Uma fun��o separada
deve ser usada para gerar cada nova pergunta. Este m�todo deve ser chamado uma vez
quando o programa iniciar a execu��o e sempre que o usu�rio responder � pergunta
corretamente.
*/

#include <iostream>
#include <cstdlib>
#include <time.h> 

using namespace std;

int fator1;
int fator2;


void geraFatores(){
	srand(time(0));
	
	fator1 = (rand() % 10) + 1; // +1 para deslocar o range 0-9 para 1-10.
	fator2 = (rand() % 10) + 1;
	
}

bool alunoAcertou(){
	int resposta;
	cout << "quanto eh " << fator1 << " x " << fator2 << "? ";
	cin >> resposta;
	
	if(resposta == (fator1 * fator2)) return true;
	return false;
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
	cout << "TABUADA" << endl;
	
	do {
		bool acertou = false;
		geraFatores();
		while(!acertou){
			acertou = alunoAcertou();
			if(acertou) cout << "Muito bom!" << endl;
			else cout << "Nao. Por favor, tente novamente." << endl;
		}
		
	} while(continuar());
	
	return 0;
}
