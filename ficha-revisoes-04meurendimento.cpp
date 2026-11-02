#include <iostream>

using namespace std;

int main() {

    float horas, horaspormes,salario;

    cout << "Quanto ganhas por hora: ";
    cin >> horas;
    cout << "Quantas horas trabalhas por mes: ";
    cin >> horaspormes;

    salario = horas * horaspormes;
    cout << "Por mes ganhas: " << salario << endl;

    salario = salario * 12;
    cout << "Por ano ganhas em media: " << salario;

    return 0;
}
