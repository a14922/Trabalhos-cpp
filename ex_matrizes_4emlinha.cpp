#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga = 1; // 1-X -1º jogar // 2-O -2ºjogar !
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro (tabuleiro);
    tabuleiro[0][1] = "s";

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostraTabuleiro(tabuleiro);
    mostraTabuleiro(tabuleiro);*/

    return 0;
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {
    for (int i=0; i<LINHAS; i++) {
        for (int j=0; j<COLUNAS; j++) {
            arr [i] [j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    cout << "\n **** 4 EM LINHA **** \n\n";
    cout << "___________________\n";
    cout << "|" << arr[5][0] << "|" << arr[5][1] << "|" << arr[5][2] << "|" << arr[5][3] << "|" << arr[5][4] << "|" << arr[5][5] << "|" << arr[5][6] << "|" << arr[5][7] << "|" << arr[5][8] << "|" << "\n";
    cout << "-------------------\n";
    cout << "|" << arr[4][0] << "|" << arr[4][1] << "|" << arr[4][2] << "|" << arr[4][3] << "|" << arr[4][4] << "|" << arr[4][5] << "|" << arr[4][6] << "|" << arr[4][7] << "|" << arr[4][8] << "|" << "\n";
    cout << "-------------------\n";
    cout << "|" << arr[3][0] << "|" << arr[3][1] << "|" << arr[3][2] << "|" << arr[3][3] << "|" << arr[3][4] << "|" << arr[3][5] << "|" << arr[3][6] << "|" << arr[3][7] << "|" << arr[3][8] << "|" << "\n";
    cout << "-------------------\n";
    cout << "|" << arr[2][0] << "|" << arr[2][1] << "|" << arr[2][2] << "|" << arr[2][3] << "|" << arr[2][4] << "|" << arr[2][5] << "|" << arr[2][6] << "|" << arr[2][7] << "|" << arr[2][8] << "|" << "\n";
    cout << "-------------------\n";
    cout << "|" << arr[1][0] << "|" << arr[1][1] << "|" << arr[1][2] << "|" << arr[1][3] << "|" << arr[1][4] << "|" << arr[1][5] << "|" << arr[1][6] << "|" << arr[1][7] << "|" << arr[1][8] << "|" << "\n";
    cout << "-------------------\n";
    cout << "|" << arr[0][0] << "|" << arr[0][1] << "|" << arr[0][2] << "|" << arr[0][3] << "|" << arr[0][4] << "|" << arr[0][5] << "|" << arr[0][6] << "|" << arr[0][7] << "|" << arr[0][8] << "|" << "\n";
    cout << "-------------------\n";
    cout << "|1|2|3|4|5|6|7|8|9|\n";
    cout << "-------------------";
}

int pedePecaJogador() {
    // pedir peca/coluna entre 1 e 9
    // só aceitar entre 1 e 9
    // retirar -1 porque começa em 0 e termina em 8
    // devolver
    int col;
    cout << "\n\nEm que coluna quer jogar?\n";
    cout << "Tem que ser entre 1 e 9: ";
    cin >> col;

    if (col > 9) {
        cout << "Essa coluna nao existe.\n";
        cout << "Tente novamente!";
    }
        return 0;

}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {

    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}
