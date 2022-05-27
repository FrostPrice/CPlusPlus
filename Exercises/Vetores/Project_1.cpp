#include <iostream>
#include <locale.h>
 
using namespace std;

#define TAM 10

int main () {
	setlocale(LC_ALL, "Portuguese");

	int numbers[TAM], bigger, smaller, result = 0;
	float average;

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor: ";
		cin >> numbers[i];
	}
	
	bigger = numbers[0];
	smaller = numbers[0];
	result = numbers[0];


	for(int i = 0; i < TAM; i++) {
		result += numbers[i];
		if(numbers[i] > bigger) bigger = numbers[i];
		else if(numbers[i] < smaller) smaller = numbers[i];   
	}
	
	// Use (float) para garantir que o resultado seja fracionado quando necessário
	// Isso é chamado de conversão
	average = (float) result / TAM;

	cout << "O maior número é: " << bigger << endl;
	cout << "O menor número é: " << smaller << endl;
	cout << "A média de todos os números é: " << average << endl;

	return 0;
} 
