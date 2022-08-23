#include <iostream>
using namespace std;
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int number;

	cout << "Digite um número: ";
	cin >> number;

	if(number < 0) {
		number = number * -1;
	}

	cout << "O número digita foi: " << number << "\n";	

	return 0;
}
