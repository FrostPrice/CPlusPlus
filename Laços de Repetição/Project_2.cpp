#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	int number = 5, result;

	for(int i = 0; i <= 10; i++) {
		result = number * i;
		cout << number << "X" << i << "=" << result << endl;
	}

	return 0;
}
