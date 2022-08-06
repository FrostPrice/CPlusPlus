#include <iostream>
using namespace std;
#include <locale.h>

void checkNumber(int number) {
	if (number > 0) {
		cout << "Ele é positivo";
	} else if (number < 0) {
		cout << "Ele é negativo";
	} else {
		cout << "Ele é igual a zero";
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int number;

	cout << "Digite um número inteiro ";
	cin >> number;

	checkNumber(number);

	return 0;
}
