/*
4 - (Cálculo de vendas) Um varejista on-line vende cinco produtos cujos preços de varejo são os
seguintes: Produto 1, R$ 2,98; produto 2, R$ 4,50; produto 3, R$ 9,98; produto 4, R$ 4,49 e produto
5, R$ 6,87. Escreva um aplicativo que leia uma série de pares de números da seguinte forma:
A. número do produto
B. quantidade vendida
Seu programa deve usar uma instrução switch para determinar o preço de varejo para cada produto.
Deve calcular e exibir o valor total de varejo de todos os produtos vendidos. Use um laço 'while'
para determinar quando o programa deve parar e exibir os resultados finais.
*/

#include <iostream>

using namespace std;

int main(){
	float preco1 = 2.98;
	float preco2 = 4.50;
	float preco3 = 9.98;
	float preco4 = 4.49;
	float preco5 = 6.87;
	
	float total = 0;
	int produto;
	int quantidade_vendida;
	char continua;
	
	cout << "---------- Lista de Vendas ----------" << endl;
	while(true){
		cout << "Digite o código do produto e quantos foram vendidos: ";
		cin >> produto >> quantidade_vendida;
		
		switch(produto){
			case 1:
				cout << "produto 1 -> " << quantidade_vendida << " vendas" << endl;
				 total += (preco1 * quantidade_vendida);
				 break;
			case 2:
				cout << "produto 2 -> " << quantidade_vendida << " vendas" << endl;
				 total += (preco2 * quantidade_vendida);
				 break;
			case 3:
				cout << "produto 3 -> " << quantidade_vendida << " vendas" << endl;
				 total += (preco3 * quantidade_vendida);
				 break;
			case 4:
				cout << "produto 4 -> " << quantidade_vendida << " vendas" << endl;
				 total += (preco4 * quantidade_vendida);
				 break;
			case 5:
				cout << "produto 5 -> " << quantidade_vendida << " vendas" << endl;
				 total += (preco5 * quantidade_vendida);
				 break;
		    default:
		    	cout << "Produto nao encontrado" << endl;
		}
		cout << "Deseja anotar mais produtos? (S/N)" << endl;
		cin >> continua;
		
		if (continua == 'N' || continua == 'n') {
		cout << fixed;
    	cout.precision(2);
		cout << "Valor total de vendas: R$" << total << endl;
		break;
		}
	}
}

