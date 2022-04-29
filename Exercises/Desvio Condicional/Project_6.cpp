#include <iostream>
using namespace std;
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	float number1, number2;

	cout << "Digite dois números reais";
	cout << "Primeiro número: ";
	cin >> number1;

	cout << "Segundo número: ";
	cin >> number2;

	if (number1 == number2) {
		cout << "Eles são iguais";
	} else if (number1 > number2) {
		cout << number1;
	} else {
		cout << number2;
	}

	return 0;
}
