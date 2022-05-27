#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 2

int main() {
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	int mat[TAM][TAM], multiplicationResult[TAM][TAM], vetResult[TAM];

	for(int i = 0; i < TAM; i++) { // Passa pelas linhas
		for(int j = 0; j < TAM; j++) { // Passa pelas colunas
			cout << "Digite um número real: ";
			cin >> mat[i][j];
		}
	}

	for(int i = 0; i < TAM; i++) {
		int lineResult = 0;

		for(int j = 0; j < TAM; j++) {
			lineResult += mat[i][j];
		}

		vetResult[i] = lineResult;
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			multiplicationResult[i][j] = vetResult[i] * mat[i][j];
		}
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			cout << multiplicationResult[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
