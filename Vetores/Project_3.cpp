#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 5

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vet[TAM], bigger = 0, smaller = 0, equal = 0;

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor: ";
		cin >> vet[i];
	}
	cout << endl;
	
	for(int i = 0; i < TAM; i++) {
		if(vet[i] > vet[0]) {
			bigger++;
			cout << "Maior " << vet[i] << endl;
		} else {
			if(vet[i] == vet[0]) {
				equal++;
				cout << "Igual " << vet[i] << endl;
			} else {
				if(vet[i] == vet[0]) {
					smaller++;
					cout << "Menor" << vet[i] << endl;
				}
			}
		}
	}
	
	cout << "\nQuantidade de maiores = " << bigger << ", menores = " << smaller << " e iguais = " << equal;

	return 0;
}
