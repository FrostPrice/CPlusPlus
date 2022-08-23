#include <iostream>
using namespace std;
#include <locale.h>

struct Data {
	int dia, mes, ano;
};

int main() {
	setlocale(LC_ALL, "Portuguese");

	return 0;
}