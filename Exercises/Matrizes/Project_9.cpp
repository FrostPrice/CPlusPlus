#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 5

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));

	float mat[TAM][TAM], result = 0;

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			mat[i][j] = rand() % 10;
			// cout << "Digite um número: ";
			// cin >> mat[i][j]
		}
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			result += mat[i][j];
		}
	}

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM; j++) {
			cout << "\t" << mat[i][j];
		}
		cout << "\t\n";
	}

	cout << "A soma de todos os valores da matriz é " << result << endl;

	return 0;
}
