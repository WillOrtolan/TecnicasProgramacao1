#include <iostream>
#include <iomanip> // necessário para usar setw

using namespace std;

int main()
{
    // Limpa a tela do console (funciona no Windows)
    system("cls");

    double T1, P1, T2, P2, N1, N2, mediaAritimetica, mediaBarao;

    cout << "Digite a nota do Trabalho 1: ";
    cin >> T1;
    cout << "Digite o peso do Prova 1: ";
    cin >> P1;
    cout << "Digite a nota do Trabalho 2: ";
    cin >> T2;
    cout << "Digite o peso do Prova 2: ";
    cin >> P2;

    N1 = (T1 + P1);
    N2 = (T2 + P2);

    mediaAritimetica = (N1 + N2) / 2;
    mediaBarao = (N1 + (2 * N2)) / 3;

    cout << fixed << setprecision(1); // Define a precisão para 2 casas decimais
    cout << "\nMédia Aritmética: " << mediaAritimetica << endl;
    cout << "Média Barão: " << mediaBarao << endl;

    return 0;
}