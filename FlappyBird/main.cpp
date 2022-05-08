/*Versão beta desenvolvida por Thiago Felski Pereira para disciplina de Algoritmos*/
#include <iostream> // Para conseguir usar inputs e outputs no terminal
#include <windows.h> // Comandos para rodar o programa no Windows
#include <conio.h> /// Para usar o getch() no Windows
#include <time.h> // Habilita a função time
///https://stackoverflow.com/questions/34474627/linux-equivalent-for-conio-h-getch

using namespace std;

/* Mateus Barbosa, Matheus Rocha, Victor André Uller, Leonardo Beduschi Iunes, */

/**
    F L A P B I R D (M2 Algoritmos)
    - Lembrando: não permitido o uso de funções e variaveis compostas como structs, vetores e matrizes
    - Corrigir os rastros (pássaro e obstáculos) - OK
    - Implementar colisão  - OK
    - Implementar pontuação (mais um ponto para cada obstáculo superado) - OK
    - Fazer 2 obstáculos simultaneos (obstaculo1 e obstaculo2) - OK
    - Deixar a pontuação visível durante todo o jogo - OK
    - Definir marcos para acelerar a velocidade - OK
*/

int main() {
    ///ALERTA: NÃO MODIFICAR O TRECHO DE CÓDIGO, A SEGUIR.
    //INICIO: COMANDOS PARA QUE O CURSOR NÃO FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR NãO FIQUE PISCANDO NA TELA
    //INÍCIO: COMANDOS PARA REPOSICIONAR O CURSOR NO INÍCIO DA TELA
    COORD coord;
    //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO INÍCIO DA TELA
    ///ALERTA: NãO MODIFICAR O TRECHO DE CÓDIGO, ACIMA.

    srand(time(NULL));
     
    int bird_x = 5, bird_y = 6, bird_y_old_position;
    int obstaculo_x = 110, obstaculo_y, obstaculo_x_old_position;
    int obstaculo2_x = obstaculo_x + 55, obstaculo2_y, obstaculo2_x_old_position;

    int tecla; // Para conseguir checar qual tecla o usuário pressionou
    int placar = 0; // Highscore do usuário
    int placar_x = 50, placar_y = 22; // Localização do placar
    int tamanho_passagem_1 = rand() % 15 + 3; // Gera valores aleatórios para a criação do local aonde o passáro deve atravessar
    int tamanho_passagem_2 = rand() % 15 + 3; // Gera valores aleatórios para a criação do local aonde o passáro deve atravessar
    float velocidade = 150; // Velocidade em que o jogo esta no momento

    bool playing = false; // Determina se o jogo deve começar ou não

    system("cls"); // Para rodar o jogo no terminal do VSCode com o layout sem ter artefatos, ou em qualquer terminal

    cout<<"-----------------------------------------------------------------------------------------------------";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"-----------------------------------------------------------------------------------------------------";

    // Menu inicial
    coord.X = 40; coord.Y = 10;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << "Bem-vindo ao FlappyBird!";
    coord.X = 40; coord.Y = 11;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << "Aperte W para comecar a jogar";
    coord.X = 40; coord.Y = 12;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout << "Q (Sair do Jogo)";

    tecla = getch(); // Valida a tecla apertada no menu inicial

    switch(tecla) {
        case 'w': case 'W':
            system("cls");

            ///Desenho Do cenario
            cout<<"-----------------------------------------------------------------------------------------------------";
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<"-----------------------------------------------------------------------------------------------------";

            // Inicia o jogo
            playing = true;

            // Lógica para fazer o jogo funcionar
            do {
                // Poscicionamento do placar
                coord.X = placar_x;
                coord.Y = placar_y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                cout << "PLACAR: " << placar;
                
                // Apaga os rastros do pássaro
                coord.X = bird_x;    
                coord.Y = bird_y_old_position;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                cout<<" ";

                // Posiciona o pássaro
                coord.Y = bird_y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                cout<<char(190);

                bird_y_old_position = bird_y;

                // Posiciona o obstáculo
                obstaculo_y=1;
                obstaculo2_y=1;
                while(obstaculo_y < 20 && obstaculo2_y < 20){
                    // Remove o rastro do obstáculo1
                    coord.X = obstaculo_x_old_position;    coord.Y = obstaculo_y;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    cout<<" ";

                    coord.X = obstaculo2_x_old_position;    coord.Y = obstaculo2_y;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    cout<<" ";

                    coord.X = obstaculo_x;    coord.Y = obstaculo_y;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    if(obstaculo_y < tamanho_passagem_1 - 1 || obstaculo_y > tamanho_passagem_1 + 1) {
                        cout<<char(219);
                    } else {
                        cout<<" ";
                    }
                    obstaculo_y++;

                    if(obstaculo2_x < 110) {
                        // Posiciona Obstáculo 2
                        coord.X = obstaculo2_x;    coord.Y = obstaculo2_y;
                        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                        if(obstaculo2_y < tamanho_passagem_2 - 1 || obstaculo2_y > tamanho_passagem_2 + 1) {
                            cout<<char(219);
                        } else {
                            cout<<"";
                        }
                    }
                    obstaculo2_y++;
                }

                // Verifica a colisão com obstaculo 1
                if(bird_x == obstaculo_x && (bird_y < tamanho_passagem_1 - 1 || bird_y > tamanho_passagem_1 + 1)) {
                    coord.X = 50;    coord.Y = 10;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    cout << "Voce Perdeu!";
                    playing = false;
                } else if(bird_x == obstaculo2_x && (bird_y < tamanho_passagem_2 - 1 || bird_y > tamanho_passagem_2 + 1)) { // Verifica a colisão com obstaculo 2
                    coord.X = 50;    coord.Y = 10;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    cout << "Voce Perdeu!";
                    playing = false;
                }
                
                // Verifica o comando do jogador
                if (kbhit()) { // Verifica se uma tecla foi pressionada
                    tecla=getch(); // Verifica comando do jogador
                }
                
                if (tecla == 'w'){
                    // Pássaro sobe 1 posição ao precionar a tecla W
                    bird_y--;
                    tecla='0';
                } else {
                    // Pássaro cai 1 posição se não for pressionado para subir
                    bird_y++;
                }

                // Valida a colisão com as bordas da tela
                if(bird_y > 20 || bird_y < 0) {
                    playing = false;
                }


                // Armazena a última posição no eixo X do obstáculo1 e obstáculo2
                obstaculo_x_old_position = obstaculo_x;
                obstaculo2_x_old_position = obstaculo2_x;

                //  Obstáculo1 avança uma posição para esquerda
                obstaculo_x--;
                //  Obstáculo2 avança uma posição para esquerda
                obstaculo2_x--;

                // Tempo de espera
                Sleep(velocidade);
                
                // Adiciona pontuação ao placar quando passar por um obstáculo  
                if (bird_x == obstaculo_x + 1 or bird_x == obstaculo2_x + 1) {
                    placar++; // Adiciona +1 ao placar
                    // Se o valor da pontuação for diferente de zero e ser multiplo de cinco
                    if (placar != 0 && placar % 5 == 0) {
                    // a velocidade aumenta a cada cinco obstaculos passados
                    velocidade = velocidade * 0.75; // A quantidade que a velocidade aumenta é de 5%
                    }
                }
            
                // Retona obstáculo para posição inicial e randomiza a passagem para o pássaro
                if(obstaculo_x < 0) {
                    obstaculo_x = 110;
                    tamanho_passagem_1 = rand() % 16 + 3;
                } else if(obstaculo2_x < 0) {
                    obstaculo2_x = 110;
                    tamanho_passagem_2 = rand() % 16 + 3;
                }

                if(!playing) {
                    // Tela de Game Over
                    coord.X = 40; coord.Y = 10;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    cout << "Sua pontuacao final: " << placar;

                    coord.X = 40; coord.Y = 11;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    cout << "Deseja jogar novamente? (S) ou (N)";

                    tecla = getch();
                    switch(tecla) {
                        // Reseta o jogo. Ao setar os valores das variáveis ao seu estado inicial
                        case 's': case 'S':
                            system("cls");
                            tecla = '0';

                            cout<<"-----------------------------------------------------------------------------------------------------";
                            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                            cout<<"-----------------------------------------------------------------------------------------------------";

                            bird_y = 6;

                            obstaculo_x = 110;
                            tamanho_passagem_1 = rand() % 15 + 3;

                            obstaculo2_x = obstaculo_x + 30;
                            tamanho_passagem_2 = rand() % 15 + 3;

                            placar = 0;

                            playing = true;
                            break;
                        // Sai do jogo
                        case 'n': case 'N':
                            system("cls");
                            system("exit");
                            break;
                    }
                }
            } while (playing);
            break;
        case 'q': case 'Q':
            system("cls");
            system("exit");
            return 0;
            break;
    }
}
