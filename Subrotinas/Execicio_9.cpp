#include <iostream>
using namespace std;
#include <locale.h>

int fatorial(int n) {
	int f = 1;
	for(int i = 1; i <= n; i++) {
		f *= i;
	}

	return f;
}

float conjunto(int n, int k) {
	return fatorial(n)/(fatorial(k)*fatorial(n - k));
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int n, k;

	cout << "Informe N: ";
	cin >> n; 
	cout << "Informe K: ";
	cin >> k; 

	cout << "O Conjunto é: " << conjunto(n, k);

	return 0;
}
