#include <iostream>
using namespace std;
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");

    float m1, m2, m3, average;

    cout << "Digite a nota das seguintes avaliações: \n";

    cout << "M1: ";
    cin >> m1;

    cout << "M2: ";
    cin >> m2;

    cout << "M3: ";
    cin >> m3;

    average = (m1 * 2 + m2 * 4 + m3 * 6)/ 12;

    cout << "A média final é: " << average << "\n";

    return 0;
}