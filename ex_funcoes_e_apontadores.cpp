#include <stdio.h>
#include <iostream>
using namespace std;

void mostraMsg();
void troca (int &x, int &y);

int main () {
    int a=5, b=3;

    mostraMsg();
    troca (a,b);

    cout << "\nA: " << a << "// B: " << b;
    return 0;
}

void mostraMsg() {
    cout << "Estou a mostrar a funcao MostraMsg\n";
}

void troca (int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
}
