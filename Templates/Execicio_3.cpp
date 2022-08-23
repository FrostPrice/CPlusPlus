#include <iostream>
using namespace std;
#include <locale.h>

template<typename T>
T soma(T a, T b) {
	return a + b;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	return 0;
}
