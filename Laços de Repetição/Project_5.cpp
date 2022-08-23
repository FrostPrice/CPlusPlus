#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	long long int result = 0;

	for(int i = 100; i <= 200; i++) {
		result += i;
	}

	cout << result << endl;

	return 0;
}
