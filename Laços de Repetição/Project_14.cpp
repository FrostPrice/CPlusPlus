#include <iostream>
#include <locale.h>
using namespace std;

int main () {
        setlocale(LC_ALL, "portuguese");

        float heaviest, lightest;

        for(int i = 1; i <= 25; i++) {
		float weight;
        	cout << "Digite o "<< i << "º peso: ";
		cin >> weight;	
	        
		if(i == 1) {
			heaviest = weight;
			lightest = weight;
		}

		if(weight > heaviest) {
			heaviest = weight;
		} else if(weight < lightest) {
			lightest = weight;
		}
	}

        cout << "O maior peso é " << heaviest << endl;
	cout << "O menor peso é " << lightest << endl;

        return 0;
}
