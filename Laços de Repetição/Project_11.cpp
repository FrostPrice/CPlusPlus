#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int number;
	float result = 0;

	cout << "Digite um número ";
	cin >> number;

	for(int i = 1; i <= number; i++) {
		result += 1.0 / i;
	}

	cout << "O resultado final é " << result << endl;

	return 0;
}
