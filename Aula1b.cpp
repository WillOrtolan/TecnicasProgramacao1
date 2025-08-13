#include <iostream>
#include <string> // necessário para usar variáveis do tipo string

using namespace std;

string nome;
string telefone;
string dataNascimento;
string endereco;
string cidade;

int main()
{
    // Limpa a tela do console (funciona no Windows)
    system("cls");

    // Entrada de nome
    cout << "Informe seu nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "\nInforme seu telefone: ";
    cin.ignore();
    getline(cin, telefone);

    cout << "\nInforme sua data de nascimento (DD/MM/AAAA): ";
    cin.ignore();
    getline(cin, dataNascimento);

    cout << "\nInforme seu endereco: ";
    cin.ignore();
    getline(cin, endereco);

    cout << "\nInforme sua cidade: ";
    getline(cin, cidade);

    // Limpa a tela do console (funciona no Windows)
    system("cls");

    // Exibe os dados informados
    cout << "\nDados informados:\n";
    cout << "Nome: " << nome << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Data de Nascimento: " << dataNascimento << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Cidade: " << cidade << endl;
}
