#include <iostream>
using namespace std;
#include <locale.h>

void castigo(int n) {
	for(int i = 0; i <= n; i++) {
		cout << "Não vou colar na Prova.\n";
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int n;

	cout << "Informe um número: ";
	cin >> n;

	castigo(n);

	return 0;
}
