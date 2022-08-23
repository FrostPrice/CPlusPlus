#include <iostream>
using namespace std;
#include <locale.h>

struct Horario {
	int hora, min, seg;
};

void defineHorario(Horario &horario) {
	do {
		cout << "Informe a Hora: ";
		cin >> horario.hora;
	} while(horario.hora < 0 || horario.hora > 23);

	do {
		cout << "Informe o(s) minuto(s): ";
		cin >> horario.min;
	} while(horario.min < 0 || horario.min > 23);

	do {
		cout << "Informe a Hora: ";
		cin >> horario.hora;
	} while(horario.hora < 0 || horario.hora > 23);
}

void somaHorarios(Horario horarioInicial, Horario horarioAdicional) {

}

int main() {
	setlocale(LC_ALL, "Portuguese");

	Horario tempo, tempoAdicional;

	return 0;
}
