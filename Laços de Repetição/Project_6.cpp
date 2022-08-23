#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	unsigned int base, expoent, result;

	cout << "Digite um valor positivo para a base e expoente:\n";
	cout << "Base: ";
	cin >> base;
	cout << "Expoente: ";
	cin >> expoent;

	result = base;

	for(int i = 1; i < expoent; i++ ) {
		result = base * result;
	}	  

	cout << "O resultado a potência é " << result; 

	return 0;
}
