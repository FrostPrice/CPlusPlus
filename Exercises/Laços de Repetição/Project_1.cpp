#include <iostream>
#include <locale.h>
using namespace std;

int main () {
	setlocale(LC_ALL, "portuguese");	

	for(int i = 0; i <= 30; i++) {
		cout << "Não vou colar na prova!\n";
	}

	return 0;
}
