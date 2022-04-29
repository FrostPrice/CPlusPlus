#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	for(int i = 100; i > 0; i--) {
		cout << i << endl;
	}

	return 0;
}
