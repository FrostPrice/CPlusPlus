#include <iostream>
#include <locale.h>
using namespace std;

int main () {
	setlocale(LC_ALL, "portuguese");

	float number;

	cout << "Digite um número real positivo ";
	cin >> number;

	while (number >= 0) {
		cout << "O número digitado é válido\n";
		cout << "Digite um número real positivo ";	
		cin >> number;	
		if(number < 0) {
			cout << "O número digitado é inválido\n";
		}
	}

	return 0;
}

