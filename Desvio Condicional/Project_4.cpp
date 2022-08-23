#include <iostream>
using namespace std;
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int age, year, month, day, birthYear, birthMonth, birthDay;

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

	if(day < birthDay && month < birthMonth){
		age = year - birthYear - 1;
	} else {
		age = year - birthYear;
	}	
	
	cout << "Você tem " << age << " anos de idade\n";

	return 0;
}
