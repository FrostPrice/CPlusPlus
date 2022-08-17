#include <iostream>
using namespace std;
#include <locale.h>

int numberSign(int number) {
	if(number < 0) {
		return 0;	
	}	
	return 1;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int number;

	cout << "Digite um número: ";
	cin >> number;
	
	cout << numberSign(number);

	return 0;
}
