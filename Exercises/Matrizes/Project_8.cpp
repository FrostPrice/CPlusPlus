#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 4

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));

	int positionI, positionJ;
	float mat[TAM][TAM], minmax;


	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			mat[i][j] = 1 + rand() % 10000;
			// cout << "Digite um número: ";
			// cin >> mat[i][j];
		}
	}
	
	minmax = mat[0][0];

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			if(mat[i][j] < minmax) {
				minmax = mat[i][j];
				positionI = i;
				positionJ = j;
			} 
		}
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			cout << "\t" << mat[i][j];
		}
		cout << "\t\n";
	}

	cout << "O Minmax é : " << minmax << '\n' << "E está na posição i(linha): " << positionI << ", j(coluna): " << positionJ << endl;

	return 0;
}
