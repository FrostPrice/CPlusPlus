#include <iostream>
using namespace std;
#include <locale.h>

int main () {
    /* alunos: Victor André Uller, Mateus Barbosa, Matheus Rocha, Leonardo Beduschi */
    setlocale(LC_ALL, "Portuguese");
    long long int codigo;
    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, somatoria, multiplicaResultado, resultadoObitido, digitoVerificador;

    cout << "Digite o número do código de barras: ";
    cin >> codigo;
     
    if (codigo < 1000000000000) {
        cout << "O número digitado tem menos de 13 digitos";
    } else if (codigo > 9999999999999) {
        cout << "O número digitado tem mais de 13 digitos";
    } else {
        // Separa os 13 digitos em suas próprias variáveis
        d12 = codigo / 1000000000000;
        d11 = codigo / 100000000000 % 10;
        d10 = codigo / 10000000000 % 10;
        d9 = codigo / 1000000000 % 10;
        d8 = codigo / 100000000 % 10;
        d7 = codigo / 10000000 % 10;
        d6 = codigo / 1000000 % 10;
        d5 = codigo / 100000 % 10;
        d4 = codigo / 10000 % 10;
        d3 = codigo / 1000 % 10;
        d2 = codigo / 100 % 10;
        d1 = codigo / 10 % 10;
        d0 = codigo / 1 % 10;

        // Multiplica as variavéis ímpares por 3
        d1 = d1 * 3;
        d3 = d3 * 3;
        d5 = d5 * 3;
        d7 = d7 * 3;
        d9 = d9 * 3;
        d11 = d11 * 3;

        // Calcula o somatória dos digitos
        somatoria = d12 + d11 + d10 + d9 + d8 + d7 + d6 + d5 + d4 + d3 + d2 + d1;

        // O resultado obtido será divido por 10, e adicionado 1
        resultadoObitido = somatoria / 10 + 1;

        // Multiplica o resultadoObitido por 10    
        multiplicaResultado = resultadoObitido * 10;

        // Calcula a diferença entre multiplicaResultado e somatoria
        digitoVerificador = multiplicaResultado - somatoria;

        // Valida se o valor é multiplo de 10, se sim, tranforma-o em 0 (zero)
        if(digitoVerificador % 10 == 0) {
            digitoVerificador = 0;
        }
        
        if (digitoVerificador == d0) {
            cout << "Seu código é válido!!!\n"; 
        } else {
            cout << "O resultado final é " << digitoVerificador << "\nO digito Verificador do código é " << d0 << "\n";
        }
    }
    return 0;
}

// Código de Barras válido -> 9782940199617