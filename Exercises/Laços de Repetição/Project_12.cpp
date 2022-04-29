#include <iostream>
#include <locale.h>
using namespace std;

int main () {
        setlocale(LC_ALL, "portuguese");

	int age, adults = 0;

	for(int i = 1; i <= 10; i++) {
		cout << "Digite a idade " << i << "º pessoa: " ;
		cin >> age;	
		
		if(age >= 18) {
			adults++;
		}
	}

	cout << "A quantidade de pessoas acima de 18 é " << adults << endl;
        
	return 0;
}



