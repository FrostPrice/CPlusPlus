#include <iostream>
using namespace std;
#include <locale.h>

void checkTrianguleSide(int side1,int side2,int side3) {
	if (side1 == side2 && side1 == side3 && side2 == side3) {
		cout << "O triângulo é equilátero";
	} else if (side1 == side2 || side2 == side3 || side1 == side3) {
		cout << "O triângulo é isósceles";
	} else {
		cout << "O triângulo é escaleno";
	}
}

int main () {
	setlocale(LC_ALL, "portuguese");

	int side1, side2, side3;

	cout << "Digite 3 números inteiros: ";
	cout << "Lado 1: ";
	cin >> side1;

	cout << "Lado 2: ";
	cin >> side2;

	cout << "Lado 3: ";
	cin >> side3;

	checkTrianguleSide(side1, side2, side3);
	
	return 0;
}
