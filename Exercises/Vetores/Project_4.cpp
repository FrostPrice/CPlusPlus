#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");

	int vector[TAM];

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor: ";
		cin >>  vector[i];
	}
	
	for(int i = 9; i >= 0; i--) {
		cout << vector[i] << endl;
	}

	return 0;
}
