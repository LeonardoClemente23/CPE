/*
Lista 1 - Exerc�cio 4
Autor: Leonardo Clemente
Data: 27/03/2024
*/

#include <iostream>

using namespace std;


void imprime_quadrado(){
    cout << "*********" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*********\n" << endl;
}
void imprime_oval(){
    cout << "   ***   " << endl;
    cout << " *     * " << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << " *     * " << endl;
    cout << "   ***   \n" << endl;
}
void imprime_seta(){
    cout << "    *    " << endl;
    cout << "   ***   " << endl;
    cout << "  *****  " << endl;
    cout << "    *    " << endl;
    cout << "    *    " << endl;
    cout << "    *    " << endl;
    cout << "    *    " << endl;
    cout << "    *    " << endl;
    cout << "    *    \n" << endl;
}
void imprime_losango(){
    cout << "    *    " << endl;
    cout << "   * *   " << endl;
    cout << "  *   *  " << endl;
    cout << " *     * " << endl;
    cout << "*       *" << endl;
    cout << " *     * " << endl;
    cout << "  *   *  " << endl;
    cout << "   * *   " << endl;
    cout << "    *    \n" << endl;
}

int main (){

    imprime_quadrado();
    imprime_oval();
    imprime_seta();
    imprime_losango();

	return 0;
}