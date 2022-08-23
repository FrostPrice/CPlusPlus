#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 5

int main() {
	setlocale(LC_ALL, "Portuguese");

	int mat[TAM][TAM];

	for(int i = 0; i < TAM; i++) { // Passa pelas linhas
		for(int j = 0; j < TAM; j++) { // Passa pelas colunas
		if(i > j) {
			mat[i][j] = 1;
		} else {
			mat[i][j] = 0;
		}
		}
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}


	return 0;
}
