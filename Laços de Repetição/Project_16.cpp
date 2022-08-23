#include <iostream>
#include <locale.h>
using namespace std;

int main () {
        setlocale(LC_ALL, "portuguese");

        int number, factor;
	
	cout << "Digite um número inteiro: ";
	cin >> number;

        for(factor = 1; number > 1; number--) {
                factor = factor * number;
        }

        cout << "O fator do número é " << factor << endl;

        return 0;
}
