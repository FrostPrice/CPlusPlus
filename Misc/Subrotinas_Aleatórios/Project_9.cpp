#include <iostream>
using namespace std;
#include <locale.h>

float calcAverage(float score1, float score2, float score3) {
	return (score1 + score2 + score3) / 3;
}

void checkStudentGrade(float average) {
	if (average >= 6) {
		cout << "Você foi Aprovado";
	} else {
		cout << "Você foi Reprovado";		
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");

	float score1, score2, score3, average;

	cout << "Qual o seu nome? ";
	cin >> name;

	cout << "Digite as notas a seguir: ";
	cout << "1º Nota ";
	cin >> score1;

	cout << "2º Nota ";
	cin >> score2;

	cout << "3º Nota ";
	cin >> score3;

	average = calcAverage(score1, score2, score3);

	checkStudentGrade(average);
        
	return 0;
}
