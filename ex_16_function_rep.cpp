#include <iostream>

using namespace std;

int factorial (int numero) {
    if (numero == 1 || numero == 0) {
        return 1;
    } else {
        return numero * factorial(numero - 1);
    }
}

int main () {

    int n = 5;

    cout << factorial (n);

    return 0;
}
