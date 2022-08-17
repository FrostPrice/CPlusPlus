#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 25

int primo(int N) {
	if(N <= 1) {
		return 0;
	}

	for(int i = 2; i < N; i++) {
		if(N % i == 0) {
			// Se entrou aqui, não é primo
			return 0;
		}
	}

	// Se chegar aqui, é primo
	return 1;
}

void preencheVetor(int v[]) {
	for(int i = 0; i < TAM; i++) {
		v[i] = rand() % 10;
	}	
}

void mostraVetor(int v[]) {
	for(int i = 0; i < TAM; i++) {
		cout << "Vetor[" << i << "] = " << v[i]  << "\n";
	}
}

void defineVetor0(int v[]) {
	for(int i = 0; i < TAM; i++) {
		if(primo(v[i])) v[i] = 0;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int v[TAM];

	preencheVetor(v);
	mostraVetor(v);
	defineVetor0(v);
	mostraVetor(v);

	return 0;
}
