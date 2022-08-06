#include <iostream>
using namespace std;
#include <locale.h>

void validateLetter(char letter) {
    switch (letter) {
        case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
            cout << "É uma vogal\n";
            break;
        default:
            cout << "Não é uma vogal\n";
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char letter;

	cout << "Digite uma Letra ";
	cin >> letter;

    validateLetter(letter);

    return 0;
}