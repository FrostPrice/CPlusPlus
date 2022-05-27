#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 5

int main() {
	setlocale(LC_ALL, "Portuguese");

	float mat[TAM][TAM];

	for(int i = 0; i < TAM; i++) { // Passa pelas linhas
		for(int j = 0; j < TAM; j++) { // Passa pelas colunas
			cout << "Digite um número real: \n";
			cin >> mat[i][j];
			if(mat[i][j] > 100) { 
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
