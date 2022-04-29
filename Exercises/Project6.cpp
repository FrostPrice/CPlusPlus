#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, ab, ba;

    cout << "Digite un número para os seguintes valores: \n";
    cout << "A: ";
    cin >> a;
    cout <<"B: ";
    cin >> b;

    ab = b, ba = a;

    cout << "Os números digitados foram: \n";
    cout << "A: " << ab << "\n";
    cout << "B: " << ba << "\n";

    return 0;
}