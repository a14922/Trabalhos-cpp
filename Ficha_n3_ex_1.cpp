#include <iostream>

using namespace std;

int funcaoSomarNs (int x) {
    if (x==0) {
        return 0;
    } else {
        if (x>0) {
            return x + funcaoSomarNs(x-1);
        } else {
            return x + funcaoSomarNs(x+1);
        }
    }
}
int main () {

    int numero;

    cout << "Diz-me um numero para somar os numeros entre esse e o 0: ";
    cin >> numero;
    cout << "\nR: " << funcaoSomarNs(numero);
    return 0;
}
