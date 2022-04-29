#include <iostream>
using namespace std;
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	char letter;

	cout << "Digite uma Letra ";
	cin >> letter;

	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
		cout << "É uma vogal\n";
	} else if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
		cout << "É uma volga....\n" << "Mas com letra maiúscula!\n";
	}
	 else {
		cout << "Não é uma vogal\n";
	}

	return 0;
}
