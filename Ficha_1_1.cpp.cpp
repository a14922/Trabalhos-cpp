#include <iostream>

using namespace std;

int main() {

    /* a. <0 :numero negativo
       b. =0 ;numero neutro
       c. >0 e <100 :numero positivo pequeno
       d. tudo o resto :numero enorme
    */


    int numero;
    cout << "Diz-me um numero ";
    cin >>  numero;

    if (numero < 0) {
        cout << "Numero negativo ";
    }
    else if (numero == 0)
        cout << "numero neutro";

    else if (numero > 0 && numero <100)
        cout << "Numero positivo pequeno";

    else if (numero <= 100)
        cout << "numero enorme";


}
