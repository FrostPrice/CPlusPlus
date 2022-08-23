#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 20

int main() {
	setlocale(LC_ALL, "Portuguese");

	int a[TAM], b[TAM], c[TAM];

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor para o vetor A: ";
		cin >> a[i];
	}

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor para o vetor B: ";
		cin >> b[i];
	}
		
	cout << endl;
	
	for(int i = 0; i < TAM; i++) {
		c[i] = a[i] - b[i];
		cout << "A subtração do vetor A na posição " << i <<  " com B na posição " << i <<  " é: " << c[i] << endl; 
	}

	return 0;
}
