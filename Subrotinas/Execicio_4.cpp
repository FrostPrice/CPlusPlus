#include <iostream>
using namespace std;
#include <locale.h>

int input_numero_positivo() {
		int input;
		bool digitando = true;

		while(digitando){
			cout << "Digite um valor: ";
			cin >> input;
			if(input < 0) digitando = true;
			else digitando = false;
		}

		return input;
}

int resto_divisao(int divisor, int dividendo) {
	return divisor - dividendo * (divisor / dividendo);
}

// int resto_divisao(int divisor, int dividendo) {
// 	int anterior;
// 	anterior = 0;
// 	while(divisor >=0) {
// 		anterior = divisor;
// 		divisor  = divisor - dividendo;
// 	}

// 	return anterior;
// }


int main() {
	setlocale(LC_ALL, "Portuguese");

	int num1, num2, resultado;
		
	num1 = input_numero_positivo();
	num2 = input_numero_positivo();

	cout << "O resto da divisão é: " << resto_divisao(num1, num2);

	return 0;
}
