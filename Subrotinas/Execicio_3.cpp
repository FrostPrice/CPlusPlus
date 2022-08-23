#include <iostream>
using namespace std;
#include <locale.h>

int mdc(int numero_1, int numero_2) {
	while(numero_1 != numero_2){
		if(numero_1 > numero_2) numero_1 = numero_1 - numero_2;
		else numero_2 = numero_2 - numero_1;
	}

	return numero_1;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int numero_1, numero_2, resultado;

	cout << "Digite um valor: ";
	cin >> numero_1;
	
	cout << "Digite outro valor: ";
	cin >> numero_2;

	resultado = mdc(numero_1, numero_2);

	cout << "O M.D.C de " << numero_1 << " e " << numero_2 << " é: " << resultado;

	return 0;
}
