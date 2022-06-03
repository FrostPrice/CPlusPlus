#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 4

int main() {
	setlocale(LC_ALL, "Portuguese");

	int mat[TAM][TAM], multiplicationResult[TAM][TAM], vetResult[TAM];

	for(int i = 0; i < TAM; i++) { // Passa pelas linhas
		for(int j = 0; j < TAM; j++) { // Passa pelas colunas
			cout << "Digite um número real: ";
			cin >> mat[i][j];
		}
	}

	// Soma o vetor
	for(int i = 0; i < TAM; i++) {
		vetResult[i] = 0; // Zera o valor da linha para a soma

		for(int j = 0; j < TAM; j++) {
			vetResult[i] += mat[i][j];
		}

	}

	// multiplica o vetor com a matriz
	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			multiplicationResult[i][j] = vetResult[i] * mat[i][j];
		}
	}

	// Exibe no console
	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			cout << "\t" << multiplicationResult[i][j];
		}
		cout << "\t\n";
	}

	return 0;
}
