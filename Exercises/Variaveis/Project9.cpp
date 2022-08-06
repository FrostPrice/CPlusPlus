#include <iostream>
using namespace std;
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float S1, C1, C2, SF, penalty = 0.02;

    cout << "O salário do João é: R$ ";
    cin >> S1;

    cout << "Digite o valor da conta 1: R$ ";
    cin >> C1;
    cout << "\nDigite o valor da conta 2: R$ ";
    cin >> C2;

    SF = S1 - (C1 * penalty + C2 * penalty);

    cout << "Do salário de João sobrará: R$ " << SF << "\n";

    return 0;
}