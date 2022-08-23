#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 4

int main() {
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	int mat[TAM][TAM], result = 0;

	for(int i = 0; i < TAM; i++) { // Passa pelas linhas
		for(int j = 0; j < TAM; j++) { // Passa pelas colunas
			mat[i][j] = rand() % 11;
			if(i == j) result = result + mat[i][j];
		}
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	cout << "O resultado da soma dos elementos da diagonal principal é: " << result << endl;

	return 0;
}
