#include <iostream>
#include <locale.h>

using namespace std;

#define TAM_1 3
#define TAM_2 5

// i = linha
// j = coluna

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));

	int a[TAM_1][TAM_2], b[TAM_1][TAM_2], c[TAM_1][TAM_2];

	// Leitura da matriz A
	for(int i = 0; i < TAM_1; i++) {
		for(int j = 0; j < TAM_2; j++) {
			a[i][j] = rand() % 10;
			// cout << "Digite um número para a matriz A: ";
			// cin >> a[i][j];
		}
	}

	// Leitura da matriz B
	for(int i = 0; i < TAM_1; i++) {
		for(int j = 0; j < TAM_2; j++) {
			b[i][j] = rand() % 10;
			// cout << "Digite um número para a matriz B: ";
			// cin >> a[i][j];
		}
	}

	// Soma da matriz A com B
	for(int i = 0; i < TAM_1; i++) {
		for(int j = 0; j < TAM_2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	// Mostra a matriz C
	for(int i = 0; i < TAM_1; i++) {
		for(int j = 0; j < TAM_2; j++) {
			cout << "\t" << c[i][j];
		}
		cout << "\n";
	}

	cout << endl << endl;

	// Mostra a linha 2 da C
	for(int j = 0; j < TAM_2; j++) {
			cout << "\t" << c[2][j];
	}

	cout << endl << endl;

	// Mostra a coluna 2 da C
	for(int i = 0; i < TAM_1; i++) {
			cout << "\t" << c[i][3];
	}
	cout << endl << endl;

	return 0;
}
