#include <iostream>
using namespace std;
#include <locale.h>

void validateHour(int hour, int minute) {
	if(hour < 24 && minute < 60) {
		cout << "A hora é válida\n";
	} else {
		cout << "A hora é inválida\n";
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int hour, minute;

	cout << "Entre com um número para as horas: ";
  	cin >> hour;
	cout << "Entre com um número para os minutos: ";
	cin >> minute;

	validateHour(hour, minute);

	return 0;
}
