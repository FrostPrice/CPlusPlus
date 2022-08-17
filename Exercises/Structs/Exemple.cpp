#include <iostream>
using namespace std;

struct Horario {
	int hora, minuto, segundo;
};

void defineHorario(Horario &tempo) {
	do {
		cout << "Defina a Hora: ";
		cin >> tempo.hora;
	} while(tempo.hora > 23 || tempo.hora < 0);

	do {
		cout << "Defina o Minuto: ";
		cin >> tempo.minuto;
	} while(tempo.minuto < 0 || tempo.minuto > 60);

	do {
		cout << "Defina o Segundos: ";
		cin >> tempo.segundo;
	} while(tempo.segundo < 0 || tempo.segundo > 60);
}

void tempoFinal(Horario &tempoAdicional, Horario &tempoInicial) {
	do {
		cout << "Defina a Hora adicional: ";
		cin >> tempoAdicional.hora;
	} while(tempoAdicional.hora > 23 || tempoAdicional.hora < 0);

	do {
		cout << "Defina o Minuto adicional: ";
		cin >> tempoAdicional.minuto;
	} while(tempoAdicional.minuto < 0 || tempoAdicional.minuto > 60);

	do {
		cout << "Defina o Segundos adicionais: ";
		cin >> tempoAdicional.segundo;
	} while(tempoAdicional.segundo < 0 || tempoAdcicional.segundo > 60);

	int horaFinal, minutoFinal, segundoFinal;

	horaFinal = tempoAdicional.hora + tempoInicial.hora;
	minutoFinal = tempoAdicional.minuto + tempoInicial.minuto;
	segundoFinal = tempoAdicional.segundo + tempoInicial.segundo;

	if(horaFinal > 24 ) horaFinal -= 24
	if(minutoFinal > 60 ) minutoFinal -= 60
	if(segundoFinal > 60 ) segundoFinal -= 60
}

int main() {
	Horario tempo, tempoAdicional;
	defineHorario(tempo);
	cout << "O tempo definido foi: " << tempo.hora << ":" << tempo.minuto << ":" << tempo.segundo;
	
	return 0;
}
