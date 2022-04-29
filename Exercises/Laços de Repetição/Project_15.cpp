#include <iostream>
#include <locale.h>
using namespace std;

int main () {
        setlocale(LC_ALL, "portuguese");

        int number, even = 0, odd = 0;

        for(int i = 1; i <= 20; i++) {
                cout << "Digite o " << i << "º número: ";
                cin >> number;

                if(number % 2 == 0) {
                        even++;
                } else {
			odd++;
		}
        }

        cout << "A quantidade de número PAR é " << even << endl;
	cout << "A quantidade de número ÍMPAR é " << odd << endl;

        return 0;
}
