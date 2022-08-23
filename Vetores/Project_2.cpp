#include <iostream>
#include <locale.h>

using namespace std;

#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");

	float grades[TAM], average = 0;
	int aboveAverage = 0;

	for(int i = 0; i < TAM; i++) {
		cout << "Digite um valor: ";
		cin >> grades[i];
		average = average + grades[i]; 
	}

	average = average / TAM;
	
	cout << "A média é: " << average << endl;
	cout << "As seguintes notas estão acima da média:\n";
	
	for(int i = 0; i < TAM; i++) {
		if(grades[i] > average)	{
			aboveAverage++; 
			cout << "->" << grades[i] << endl;
		}	
	}	

	cout << "Quantidade: " << aboveAverage;

	return 0;
}
