#include <iostream>
using namespace std;
#include <locale.h>

int input_numero_positivo() {
		int input;
		bool digitando = true;

		while(digitando){
			cout << "Digite um valor: ";
			cin >> input;
			if(input < 0) digitando = true;
			else digitando = false;
		}

		return input;
}

bool numero_perfeito(int numero) {
	int acumulador = 0; 
	for(int i = 1; i < numero; i++) {// Não existe divisão por 0 (zero), por isso "i" começa no 1 (um)
		if(numero % i == 0) acumulador += i;
	}

	if(acumulador == numero) return true;
	else return false;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int n;

	n = input_numero_positivo();

	cout << "Perfection? " << numero_perfeito(n);

	return 0;
}
