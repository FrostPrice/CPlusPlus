#include <iostream>
using namespace std;
#include <locale.h>

void validateNumber(int number) {
    if (number % 2 == 0) cout << "O número é par\n";
    else cout << "O número é ímpar\n";
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int number;

    cout << "Entre com um número inteiro: ";
	cin >> number;

    validateNumber(number);

    return 0;
}