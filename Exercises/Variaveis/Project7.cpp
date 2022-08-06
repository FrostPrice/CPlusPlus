#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float distanceKm, gasConsumption, gasPrice, totalValue;

    cout << "Digite a distancia a ser percorrida (Km): ";
    cin >> distanceKm;
    cout << "Digite o consumo de combustível do carro (Km/L): ";
    cin >> gasConsumption;
    cout << "Digite o preço do combustível: ";
    cin >> gasPrice;

    totalValue = gasConsumption * gasPrice / distanceKm;

    cout << "O valor de combustível gasto na viagem será de R$ " << totalValue << "\n";

    return 0;
}