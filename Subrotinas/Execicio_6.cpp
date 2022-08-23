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

bool amigos(int num1, int num2) {
	int a_num1 = 0, a_num2 = 0;
	for(int i = 1; i < num1; i++) {// Não existe divisão por 0 (zero), por isso "i" começa no 1 (um)
		if(num1 % i == 0) a_num1 += i;
	}
	for(int i = 1; i < num2; i++) {// Não existe divisão por 0 (zero), por isso "i" começa no 1 (um)
		if(num2 % i == 0) a_num2 += i;
	}

	if(a_num1 == num2 && a_num2 == num1) return true;
	else return false;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num1, num2;

	num1 = input_numero_positivo();
	num2 = input_numero_positivo();

	if(amigos(num1, num2)) cout << num1 << " é amigo de " << num2;
	else cout << num1 << " não é amigo de " << num2;

	return 0;
}
