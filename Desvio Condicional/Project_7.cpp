#include <iostream>
using namespace std;
#include <locale.h>

int main() {
        setlocale(LC_ALL, "portuguese");
	
	int number;

	cout << "Digite um número inteiro ";
	cin >> number;

	if (number > 0) {
		cout << "Ele é positivo";
	} else if (number < 0) {
		cout << "Ele é negativo";
	} else {
		cout << "Ele é igual a zero";
	}

        return 0;
}
