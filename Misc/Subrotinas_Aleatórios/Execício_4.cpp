#include <iostream>
using namespace std;
#include <locale.h>

int validateAge(int birthDay, int birthMonth, int birthYear, int day, int month, int year) {
    if(day < birthDay && month < birthMonth){
		return year - birthYear - 1;
	} else {
		return year - birthYear;
	}	
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int birthDay, birthMonth, birthYear, day, month, year;

    cout << "Digite sua data de nascimento: \n";
	cout << "Dia: ";
	cin >> birthDay;
	
	cout << "Mês: ";
	cin >> birthMonth;

	cout << "Ano: ";
	cin >>  birthYear;

	cout << "Digite o data de hoje: \n";
	cout << "Dia: ";
	cin >> day;

	cout << "Mês: ";
	cin >> month;
	
	cout << "Ano: ";
	cin >> year;
	
	cout << "Você tem " << validateAge(birthDay, birthMonth, birthYear, day, month, year) << " anos de idade\n";

    return 0;
}