#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");

	int oper1, oper2, operation, i = 1;
	float result;
	
	cout << "Digite 2 operadores:\n";
	cin >> oper1 >> oper2;

	cout << "Selecione umas das opções abaixo: \n1 - soma,\n2 - produto\n3 - divisão,\n4 - potência\n";
	cin >> operation;

	while(oper1 != 0 && oper2 != 0) {
		if(operation == 1) {
			result = oper1 + oper2;
			cout << result << endl;
		} else if(operation == 2) {
			result = oper1 * oper2;
			cout << result << endl;
		} else if(operation == 3) {
			result = oper1 / oper2;
			cout << result << endl;
		} else if(operation == 4) {
			result = oper1;
			while(i < oper2) {
				result = oper1 * result;
				i++; 
			}
			cout << result << endl;
		} else {
			cout << "Por favor, escolha uma operação válida";
		}

		cout << "Digite 2 operadores:\n";
		cin >> oper1 >> oper2;

		cout << "Selecione umas das opções abaixo: \n1 - soma,\n2 - produto\n3 - divisão,\n4 - potência\n";
		cin >> operation;
	}

	return 0;
}
