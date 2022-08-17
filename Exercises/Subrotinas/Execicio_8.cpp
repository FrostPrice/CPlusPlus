#include <iostream>
using namespace std;
#include <locale.h>

int primo(int N) {
	if(N <= 1) {
		return 0;
	}

	for(int i = 2; i < N; i++) {
		if(N % i == 0) {
			// Se entrou aqui, não é primo
			return 0;
		}
	}

	// Se chegar aqui, é primo
	return 1;
}

void primo100() {
	int N = 100;
	for(int i = 1; i <= 10; i++) {
		if(primo(N) == 1) {
			cout << "\n" << i << ": " << N;
		} else {
			i--;
		}
		N++;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	primo100();

	return 0;
}
