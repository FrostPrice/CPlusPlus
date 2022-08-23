#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	int number, amountNumbers = 0, average = 0;
	float result = 0;

	cout << "Por favor, digite um número: ";
	cin >> number;

	do {
		cout << "Por favor, digite um número: ";
		cin >> number;
		
		if(number % 2 && number != 0) {
			average += number;
			amountNumbers++;
		}
	}while (number != 0);

	if(amountNumbers != 0) {	
		result  = average / amountNumbers;
	}
	
	cout << "O resultado da média aritimética é " << result << endl;
	
	return 0;
}
