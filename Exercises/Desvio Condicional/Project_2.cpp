#include <iostream>
using namespace std;
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int number;

	cout << "Entre com um número inteiro ";
	cin >> number;

	if(number % 2 == 0) {
		cout << "O número é Par";
	} else {
		cout << "O número é Ímpar";
	}	

	return 0;
}
