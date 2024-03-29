/*
Lista 1 - Exerc�cio 7
Autor: Leonardo Clemente
Data: 27/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;


bool eh_primo(int n){
    if (n < 2) return false; 

    if (n == 2) return true;

    int n_verify_max = (int)sqrt(n) + 1; // limite da verificação do primo

    for (int i = 0; i < n_verify_max; i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main (){
    int n;

	cout << "Escreva um numero e veja se eh primo: ";
	cin >> n;

    if (eh_primo(n)) {
        cout << n << " eh primo." << endl;
    }
    else{
        cout << n << " nao eh primo." << endl;
    }
	return 0;
}