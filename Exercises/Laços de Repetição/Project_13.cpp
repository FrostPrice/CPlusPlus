#include <iostream>
#include <locale.h>
using namespace std;

int main () {
        setlocale(LC_ALL, "portuguese");

        int number, smallestNumber;

        for(int i = 1; i <= 20; i++) {
                cout << "Digite o " << i << "º número: ";
                cin >> number;

		if(i == 1)
			smallestNumber = number;

                if(smallestNumber > number) {
                        smallestNumber = number;
                }
        }

        cout << "O menor número é " << smallestNumber << endl;

        return 0;
}
