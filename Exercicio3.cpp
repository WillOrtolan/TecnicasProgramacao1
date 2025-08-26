#include <iostream>
#include <iomanip> // necessário para usar setw

using namespace std;

int main()
{
    // Limpa a tela do console (funciona no Windows)
    system("cls");

    double km, l;

    cout << "Digite a quantidade de km percorridos: ";
    cin >> km;
    cout << "Digite a quantidade de litros consumidos: ";
    cin >> l;
    cout << fixed << setprecision(3); // Define a precisão para 2 casas decimais
    cout << "\nO consumo médio foi de " << (km / l) << " km/l" << endl;

    return 0;
}