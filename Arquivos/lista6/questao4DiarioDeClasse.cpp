/*
Lista 6 - Exerc�cio 4
Autor: Leonardo Clemente
Data: 09/07/2024

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

string path = "arquivos/alunos/";

bool acha_aluno(string nome){
    //Verifica existencia do cadastro do aluno
    ifstream cadastro;
    string nome_arquivo = path + nome + ".txt";

    cadastro.open(nome_arquivo);
    if(!cadastro.is_open()){
        return false;
    }
    cadastro.close();
    return true;
}

void trata_nome(string &nome){
    // Substitui os espaços por underscore
    for (char& caractere : nome) {
        if (caractere == ' ') {
            caractere = '_';
        } else {
            caractere = std::toupper(caractere);
        }
    }
}

void cadastra_aluno(string nome, unsigned int matricula){
    // Cria o arquivo de cadastro do aluno
    ofstream cadastro;
    string nome_arquivo = path + nome + ".txt";

    cadastro.open(nome_arquivo);
    if(!cadastro.is_open()){
        cerr << "Nao foi possivel abrir o arquivo" << endl;
    }
    cadastro << matricula << endl;
    cadastro.close();
}

void cadastra_nota_aluno(string nome, float nota_aluno){
    // Atualiza o arquivo de cadastro do aluno, acrescentando uma nota
    ofstream cadastro;
    string nome_arquivo = path + nome + ".txt";

    cadastro.open(nome_arquivo, ios::app);
    if(!cadastro.is_open()){
        cerr << "Nao foi possivel abrir o arquivo" << endl;
    }
    cadastro << nota_aluno << endl;
    cadastro.close();
}

void calcula_media_aluno(string nome){
    // Consulta as notas do aluno para calcular a media. Se nao tiver notas cadastradas, uma mensagem aparece na tela.
    ifstream cadastro;
    string nome_arquivo = path + nome + ".txt";

    cadastro.open(nome_arquivo);
    if(!cadastro.is_open()){
        cerr << "Nao foi possivel abrir o arquivo" << endl;
    }

    string linha;
    bool achou_nota;
    float soma_nota = 0.0;
    int cont = 0;

    // Primeira linha eh a matricula
    getline(cadastro, linha);
    while(getline(cadastro, linha)){
        soma_nota += stof(linha);
        cont++;
    }
    cadastro.close();

    if(cont == 0){
        cout << "O aluno nao possui notas cadastradas" << endl;
        return;
    }
    cout << "Media do aluno: " << soma_nota / cont << endl;
}

int main()
{
    string nome_do_aluno;
    unsigned int matricula;
    float nota_aluno;
    int opcao;
    bool sair = false;

    cout << "============ DIARIO DE CLASSE ============" << endl;
    
    while(!sair){
        cout << "selecione uma opcao:" << endl;
        cout << endl;
        cout << "1. Cadstrar aluno" << endl;
        cout << "2. Adicionar nota de um aluno" << endl;
        cout << "3. Calcular media de um aluno" << endl;
        cout << "4. fechar o programa" << endl;

        cin >> opcao;
        //limpa o buffer do cin, para não ter problemas na próxima input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (opcao)
        {
        case 1:
            cout << "Nome do aluno: ";
            getline(cin, nome_do_aluno);
            cout << "Matricula do aluno: ";
            cin >> matricula;

            trata_nome(nome_do_aluno);
            if(acha_aluno(nome_do_aluno)){
                cout << "Aluno ja cadastrado." << endl;
            } else {
                cadastra_aluno(nome_do_aluno, matricula);
            }
            cout << endl;
            break;
        case 2:
            cout << "Nome do aluno: ";
            getline(cin, nome_do_aluno);
            cout << "Nota do aluno: ";
            cin >> nota_aluno;

            trata_nome(nome_do_aluno);
            if(!acha_aluno(nome_do_aluno)){
                cout << "Aluno sem cadastro." << endl;
            } else {
                cadastra_nota_aluno(nome_do_aluno, nota_aluno);
            }
            cout << endl;
            break;
        case 3:
            cout << "Nome do aluno: ";
            getline(cin, nome_do_aluno);

            trata_nome(nome_do_aluno);
            if(!acha_aluno(nome_do_aluno)){
                cout << "Aluno sem cadastro." << endl;
            } else {
                calcula_media_aluno(nome_do_aluno);
            }
            cout << endl;
            break;
        case 4:
            sair = true;
            break;
        
        default:
            cout << "OPCAO INVALIDA!" << endl;
            cout << endl;
            continue;
        }
        

    }
    return 0;
}
