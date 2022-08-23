#include <iostream>
using namespace std;
#include <locale.h>

float input_numero_positivo() {
		int input;
		bool digitando = true;

		while(digitando){
			cout << "Informe um peso: ";
			cin >> input;
			if(input < 0) digitando = true;
			else digitando = false;
		}

		return input;
}

float peso_ideal(float altura, char sexo) {
	if(sexo == 'm') return 72,7 * altura - 58;
	else return 62,1 * altura - 44,7;
}


int main() {
	setlocale(LC_ALL, "Portuguese");

	float altura;
	char sexo;

	altura = input_numero_positivo();
	cout << "Digite seu sexo: ";
	cin >> sexo;

	cout << "O peso ideal é: " << peso_ideal(altura, sexo);

	return 0;
}
