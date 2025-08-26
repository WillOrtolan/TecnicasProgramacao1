#include <iostream>
#include <iomanip> // necessário para usar setw

using namespace std;

int main()
{
    // Limpa a tela do console (funciona no Windows)
    system("cls");
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (idade >= 18)
    {
        cout << "Você é maior de idade." << endl;
    }
    else
    {
        cout << "Você é menor de idade." << endl;
    }

    return 0;
}