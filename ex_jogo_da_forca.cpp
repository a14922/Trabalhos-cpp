#include <iostream>

using namespace std;

#define NLETRAS 10

int numTentativas =5;

// so letras maiusculas, palavras max de 10 caracteres
// 5 tentativas max !
void mostrarGrelha (char pl[NLETRAS]) {
    cout << "\n";
    for (int i=0; i<NLETRAS; i++) {
        if (pl[i] != ' ') {
            cout << "_ ";
        }
    }
}

int main () {

    bool ganhou = false;
    char letra;
    //string palavra = "CASA";
    char palavra[NLETRAS] = {'C', 'A', 'S', 'A', ' ', ' ', ' ', ' ', ' ', ' ',};

    while (numTentativas>0) {
        mostrarGrelha(palavra);

        cout << "\nRestam "<< numTentativas << " tentativas";
        cout << "   \n\nDiga a Letra que queres verificar: ";
        cin >> letra;
        numTentativas--;
    }

    cout << "\n\n---------------------------------------";
    if (ganhou) {
        cout << "\nParabens .. ganhaste.";
    } else {
        cout << "\n\nEs um nabo a portugues. Perdeste.";
    }

    return 0;
}
