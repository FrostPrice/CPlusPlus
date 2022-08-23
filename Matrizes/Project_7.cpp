#include <iostream>
#include <locale.h>

using namespace std;

#define TAM_1 4 
#define TAM_2 6

int main() {
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	float m[TAM_1][TAM_2], n[TAM_2][TAM_1], r[TAM_1][TAM_1] = {0};
	// A Matriz result vai ter todos seus elementos zerados

	// Preenche matriz M
	for(int i = 0; i < TAM_1; i++) {
		for(int j = 0; j < TAM_2; j++) {
			m[i][j] = rand() % 10;
			// cout << "Digite um número para a matriz M: ";
			// cin >> m[i][j];
		}
	}

	// Preenche matriz N
	for(int i = 0; i < TAM_2; i++) {
		for(int j = 0; j < TAM_1; j++) {
			n[i][j] = rand() % 10;
			// cout << "Digite um número para a matriz N: ";
			// cin >> m[i][j];
		}
	}

	// Calcula produto (multiplicação) da matriz M por N
	for(int i = 0; i < TAM_1; i++) { // Linhas da Matriz M
		for(int j = 0; j < TAM_1; j++) { // Coluna da Matriz N
			for(int k = 0; k < TAM_2; k++) { // K é o índice que vai percorrer a coluna da matriz M e a linha da matriz N
				r[i][j] += m[i][k] * n[k][j];
			}
		}
	}

	// Mostra matriz r no console
	for(int i = 0; i < TAM_1; i++) {
		for(int j = 0; j < TAM_1; j++) {
			cout << "\t" << r[i][j];
		}
		cout << "\t\n";
	}
 
	return 0;
}	
