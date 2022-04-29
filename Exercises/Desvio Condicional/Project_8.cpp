#include <iostream>
using namespace std;
#include <locale.h>

int main() {
        setlocale(LC_ALL, "portuguese");

        float number1, number2, number3;

	cout << "Digite 3 números \n";
	cout << "Número 1: ";
	cin >> number1;

	cout << "Número 2: ";
	cin >> number2;

	cout << "Número 3: ";
	cin >> number3;

	if (number1 < number2 && number1 < number3) {
		cout << number1;
	} else if (number2 < number1 && number2 < number3) {
		cout << number2;
	} else if (number3 < number1 && number3 < number2) {
		cout << number3;
	} else {
		cout << "Os números são iguais";
	}

        return 0;
}
