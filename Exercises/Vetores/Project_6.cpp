#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");

	int vet[TAM], higher, smaller, higherFactor, smallerFactor;

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor: ";
		cin >> vet[i];
	}

	higher = vet[0];
	smaller = vet[0];
	
	cout << endl;
	
	for(int i = 0; i < TAM; i++) {
		if(vet[i] > higher) {
			higher = vet[i];
		} else if(vet[i] > smaller){
			smaller = vet[i];
		}
	}

	for(int i = higher - 1; i >= 1; i--) {
		higherFactor = higher * i;
	}

	for(int i = smaller - 1; i >= 1; i--) {
		smallerFactor = smaller * i;
	}

	cout << "O fatorial do menor valor é: " << smallerFactor;
	cout << "O fatorial do maior valor é: " << higherFactor;

	return 0;
}
