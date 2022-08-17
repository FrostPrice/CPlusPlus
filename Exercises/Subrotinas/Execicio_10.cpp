#include <iostream>
using namespace std;
#include <locale.h>

float serie(int n) {
	float S = 0;
	for(int i = 1; i <= n; i++) {
		S += (1.0 + i * i) / i;
	}
	
	return S;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int n;

	cout << "Informe um número para N: ";
	cin >> n;

	cout << endl << "Serie: " << serie(n);

	return 0;
}
