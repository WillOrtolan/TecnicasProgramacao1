#include <iostream>
#include <string> // nessesario para usar variavel do tipo string

using namespace std;

int main()
{
    // Limpa a tela do console (funciona no Windows)
    system("cls");

    int numero;
    double decimal;
    string texto;
    char letra;
    bool logico;

    // Entrada de inteiros
    cout << "Informe um numero inteiro: ";
    cin >> numero;
    cout << "\nO numero informado foi: " << numero << endl;

    // Entrada de Decimal
    cout << "Informe um numero decimal inteiro: ";
    cin >> decimal;
    cout << "\nO numero informado foi: " << decimal << endl;

    // Entrada de texto
    cout << "Informe um text inteiro: ";
    // Limpa o buffer
    cin.ignore();
    getline(cin, texto); // getline permite ler uma linha inteira, incluindo espaços
    cout << "\nO texto informado foi: " << texto << endl;

    // Entrada de caracter
    cout << "Informe uma letra inteiro: ";
    cin >> letra;
    cout << "\nA letra informado foi: " << letra << endl;

    // Entrada de booleano
    cout << "Informe verdadeiro ou falso: ";
    cin >> logico;
    cout << "\nVoce informado: " << logico << endl;

    return 0;
}