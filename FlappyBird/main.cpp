/*Vers�o beta desenvolvida por Thiago Felski Pereira para disciplina de Algoritmos*/
#include <iostream>
#include <windows.h> // Comandos para rodar o programa no Windows
#include <conio.h> /// Para usar o getch() no Windows
///https://stackoverflow.com/questions/34474627/linux-equivalent-for-conio-h-getch

using namespace std;

/**
    F L A P B I R D (M2 Algoritmos)
    - Lembrando: n�o permitido o uso de fun��es e vari�veis compostas como structs, vetores e matrizes
    - Corrigir os rastros (p�ssaro e obst�culos)
    - Implementar colis�o
    - Implementar pontua��o (mais um ponto para cada obst�culo superado)
    - Fazer 2 obst�culos simult�neos (obstaculo1 e obstaculo2)
    - Deixar a pontua��o vis�vel durante todo o jogo
    - Definir marcos para acelerar a velocidade
*/

int main()
{
    ///ALERTA: N�O MODIFICAR O TRECHO DE C�DIGO, A SEGUIR.
    //INICIO: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    //IN�CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    COORD coord;
    //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    ///ALERTA: N�O MODIFICAR O TRECHO DE C�DIGO, ACIMA.

    int bird_x=5, bird_y=10;
    int obstaculo_x=110, obstaculo_y;
    int tecla;

    ///DESENHO DO CEN�RIO
    cout<<"-----------------------------------------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"-----------------------------------------------------------------------------------------------------";

    while (true) { //esse la�o faz o jogo rodar para sempre

        ///POSICIONA O P�SSARO
        coord.X = bird_x;    coord.Y = bird_y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        cout<<char(190);

        ///POSICIONA O OBST�CULO

        obstaculo_y=1;
        while(obstaculo_y<20){
            coord.X = obstaculo_x;    coord.Y = obstaculo_y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            if(obstaculo_y<5 || obstaculo_y>7){
                cout<<char(219);
            } else {
                cout<<" ";
            }

            obstaculo_y++;
        }

        ///VERIFICA COLIS�O

        ///VERIFICA COMANDO DO JOGADOR
        if (kbhit()) { ///verifica se uma tecla foi pressionada
            tecla=getch(); //verifica comando do jogador
        }

        if ( tecla=='w' ){
            bird_y--;
            tecla='0';
        } else {
            bird_y++;
        }

        ///P�SSARO CAI 1 POSI��O SE N�O FOI PRESSIONADO PARA SUBIR

        ///OBST�CULO AVAN�A UMA POSI��O PARA ESQUERDA
        obstaculo_x--;

        ///TEMPO DE ESPERA
        Sleep(400);
    }
    return 0;
}