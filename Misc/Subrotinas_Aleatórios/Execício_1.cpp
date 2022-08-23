#include <iostream>
using namespace std;
#include <locale.h>

int checkNumber(int &number) {
    if (number < 0) return number *= -1;
    else return number;
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    int number;

    cout << "Digite um número inteiro: ";
    cin >> number;

    cout << "O número digitado foi: " << checkNumber(number) << endl;

    return 0;
}

