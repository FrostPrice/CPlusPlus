#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	int number1 = 1, number2 = 1, fibonacci, result;

	for(int i = 1; i <= 20; i++) {
		fibonacci = number1 + number2;
		result += number1;
	}

	return 0;
}
